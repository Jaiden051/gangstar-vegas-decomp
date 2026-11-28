#!/usr/bin/env python3
"""List catch-all stub templates in DecompForwardDecls.h that shadow real functions.

DecompForwardDecls.h contains variadic fallbacks such as

    namespace glf { namespace Fs {
      template <typename... Args> inline int DoesFileExist(Args...) { return 0; }
    } }

They let a translation unit compile when the real declaration is not visible, but any
call that binds to them silently does nothing. When the function is actually
implemented somewhere in the tree, that is a runtime bug (e.g. OBB mounting failed
because glf::Fs::DoesFileExist always returned 0).

Usage: python tools/audit_stub_templates.py [--all]
Prints "<qualified name>  <stub line>  <definition file:line>" for stubs whose function
has a real out-of-line definition (or every stub with --all).
"""
import os
import re
import sys

ROOT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "G4_UP8Shop")
DECLS = os.path.join(ROOT, "sources", "Core", "Decls", "DecompForwardDecls.h")

STUB = re.compile(r"template <typename\.\.\. Args> inline [^(]*?\b([A-Za-z_][A-Za-z_0-9]*)\(Args\.\.\.\)\s*\{")
NS_OPEN = re.compile(r"namespace ([A-Za-z_][A-Za-z_0-9]*) \{")


def stubs():
    out = []
    stack = []
    with open(DECLS, encoding="utf-8", errors="replace") as f:
        for no, line in enumerate(f, 1):
            # track namespaces opened/closed on this line, in order
            pos = 0
            tokens = re.finditer(r"namespace ([A-Za-z_][A-Za-z_0-9]*) \{|\{|\}", line)
            m = STUB.search(line)
            if m:
                # namespaces opened earlier on the same line count too
                pre = line[:m.start()]
                ns = stack + NS_OPEN.findall(pre)
                out.append(("::".join(ns + [m.group(1)]), no))
            for t in tokens:
                if t.group(1):
                    stack.append(t.group(1))
                elif t.group(0) == "{":
                    stack.append(None)
                else:
                    if stack:
                        stack.pop()
            stack = [s for s in stack]  # keep markers
            # drop anonymous brace markers from the namespace path view
            stack_ns = [s for s in stack if s is not None]
            if len(stack_ns) != len(stack):
                # braces of function bodies on one line are balanced, so markers vanish;
                # leftovers mean a multi-line body: keep only namespaces
                stack = stack_ns
    return out


def definitions(names):
    want = {n: [] for n in names}
    pats = {n: re.compile(r"^[A-Za-z_].*?\b" + re.escape(n) + r"\(") for n in names}
    by_last = {}
    for n in names:
        by_last.setdefault(n.rsplit("::", 1)[-1], []).append(n)
    for dirpath, _, files in os.walk(ROOT):
        for fn in files:
            if not fn.endswith((".cpp", ".inl", ".c")):
                continue
            path = os.path.join(dirpath, fn)
            with open(path, encoding="utf-8", errors="replace") as f:
                for no, line in enumerate(f, 1):
                    if not line or not (line[0].isalpha() or line[0] == "_"):
                        continue
                    if line.rstrip().endswith(";"):
                        continue
                    for last, cands in by_last.items():
                        if last + "(" not in line:
                            continue
                        for n in cands:
                            if pats[n].search(line):
                                want[n].append("%s:%d" % (os.path.relpath(path, ROOT), no))
    return want


def main():
    show_all = "--all" in sys.argv
    st = stubs()
    defs = definitions(sorted({n for n, _ in st}))
    shadowing = 0
    for name, no in st:
        d = defs.get(name) or []
        if d:
            shadowing += 1
        if d or show_all:
            print("%-60s DecompForwardDecls.h:%-7d %s" % (name, no, d[0] if d else "-"))
    print("\n%d stub templates, %d shadow a real definition" % (len(st), shadowing), file=sys.stderr)


if __name__ == "__main__":
    main()
