#!/usr/bin/env python3
"""Check kFnMap (RelocatedDataInit.cpp) entries of overloaded functions.

kFnMap maps x86 function addresses (stored in the copied RW data: vtables, callbacks)
to the ARM symbol of the decompiled function. When a function name is overloaded, the
generator can pick the wrong overload. For example CZipReader::openFile(const char *)
at x86 0xe912c0 was mapped to the openFile(index) overload, so a vtable call passed a
name where an index was expected.

For every map entry whose qualified name has several definitions in the tree, this
compares the parameter types of the mapped symbol with those of the definition whose
"binary VA" comment equals the entry's x86 address, and prints mismatches.

Usage: python tools/audit_fnmap_overloads.py [--fix]
  --fix  rewrites a mismatched __asm__ symbol to the built overload whose parameter
         types match the definition (needs build-armv7/libGangstar4.so).
Uses llvm-nm/llvm-cxxfilt from the NDK ($CXXFILT overrides the cxxfilt path).
"""
import os
import re
import subprocess
import sys
from collections import defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.join(HERE, "..", "G4_UP8Shop")
RELOC = os.path.join(ROOT, "androidPort", "GameSpecific", "jni", "RelocatedDataInit.cpp")
SO = os.path.join(HERE, "..", "..", "build-armv7", "libGangstar4.so")
CXXFILT = os.environ.get("CXXFILT") or os.path.join(
    HERE, "..", "..", "toolchains", "android-ndk-r27c", "toolchains", "llvm", "prebuilt",
    "windows-x86_64", "bin", "llvm-cxxfilt.exe")
NM = os.path.join(os.path.dirname(CXXFILT), "llvm-nm.exe")

VA_RE = re.compile(r"^// Function: (\S+)\s+\(binary VA: 0x([0-9a-fA-F]+)\)")
FNPTR_RE = re.compile(r"(.*\(\s*\*)\s*\w+(\s*\).*)$")
IDENT_RE = re.compile(r"^[A-Za-z_]\w*$")
BUILTIN = {"int", "char", "short", "long", "float", "double", "bool", "unsigned", "signed", "void"}
TYPE_ALIASES = {
    "uint32_t": "unsigned int", "int32_t": "int", "uint16_t": "unsigned short",
    "int16_t": "short", "uint8_t": "unsigned char", "int8_t": "signed char",
    "size_t": "unsigned int", "uintptr_t": "unsigned int", "intptr_t": "int",
    "int64_t": "long long", "uint64_t": "unsigned long long",
}


def split_params(s):
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch in "(<":
            depth += 1
        elif ch in ")>":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur)
            cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur)
    return [p.strip() for p in out if p.strip() and p.strip() != "void"]


def norm_type(param):
    """Parameter text (with or without a name) -> comparable type string."""
    t = param.strip()
    m = FNPTR_RE.match(t)
    if m:
        t = m.group(1) + m.group(2)
    else:
        words = t.replace("*", " * ").replace("&", " & ").split()
        if len(words) > 1 and IDENT_RE.match(words[-1]) and words[-1] not in BUILTIN:
            t = t[: t.rfind(words[-1])]
    t = re.sub(r"\b(const|volatile|struct)\b", "", t)
    t = re.sub(r"\(glitch::memory::E_MEMORY_HINT\)0|\b0ull\b|\(int\)0", "0", t)
    for a, b in TYPE_ALIASES.items():
        t = re.sub(r"\b%s\b" % a, b, t)
    t = re.sub(r"\bunsigned\b(?!\s+(int|char|short|long))", "unsigned int", t)
    return re.sub(r"\s+", "", t)


def param_types(text_after_open_paren):
    depth, end = 1, len(text_after_open_paren)
    for i, ch in enumerate(text_after_open_paren):
        depth += ch == "("
        depth -= ch == ")"
        if depth == 0:
            end = i
            break
    return [norm_type(x) for x in split_params(text_after_open_paren[:end])]


def definitions():
    """qualified name -> list of (va, [param types], definition line)."""
    defs = defaultdict(list)
    for dirpath, _, files in os.walk(ROOT):
        for fn in files:
            if not fn.endswith((".cpp", ".inl")):
                continue
            with open(os.path.join(dirpath, fn), encoding="utf-8", errors="replace") as f:
                lines = f.read().split("\n")
            for i, line in enumerate(lines):
                m = VA_RE.match(line)
                if not m:
                    continue
                name, va = m.group(1), int(m.group(2), 16)
                for j in range(i + 1, min(i + 6, len(lines))):
                    d = lines[j]
                    k = d.find(name + "(")
                    if k < 0 or d.startswith("//"):
                        continue
                    text, n = d, j + 1
                    while text.count("(") > text.count(")") and n < j + 30:
                        text += " " + lines[n].strip()
                        n += 1
                    defs[name].append((va, param_types(text[k + len(name) + 1:]), d.strip()))
                    break
    return defs


def demangle(names):
    out = subprocess.run([CXXFILT], input="\n".join(names), capture_output=True, text=True).stdout
    return dict(zip(names, out.split("\n")))


def main():
    fix = "--fix" in sys.argv
    src = open(RELOC, encoding="utf-8", newline="").read()
    decl = dict(re.findall(r'void (g4_relfn_\w+)\(void\) __asm__\("([^"]+)"\);', src))
    entries = re.findall(r"\{ 0x([0-9a-f]+)u, reinterpret_cast<const void \*>\(&(g4_relfn_\w+)\) \}", src)
    defs = definitions()
    overloaded = {q for q, v in defs.items() if len(v) > 1}
    dem = demangle(sorted({decl[f] for _, f in entries if f in decl}))

    bad = []
    for addr, fn in entries:
        sym = decl.get(fn)
        d = dem.get(sym, "") if sym else ""
        p = d.find("(")
        if p < 0 or d[:p] not in overloaded:
            continue
        at_va = [c for c in defs[d[:p]] if c[0] == int(addr, 16)]
        if at_va and at_va[0][1] != param_types(d[p + 1:]):
            bad.append((addr, fn, sym, d, at_va[0]))
    for addr, fn, sym, d, (_, _, line) in bad:
        print("0x%s %s\n  mapped:  %s\n  defined: %s" % (addr, fn, d, line))
    print("\n%d overloaded entries map to an overload with different parameter types" % len(bad), file=sys.stderr)

    if fix and bad:
        raw = subprocess.run([NM, "--defined-only", SO], capture_output=True, text=True).stdout.split("\n")
        mangled = [l.split()[-1] for l in raw if len(l.split()) == 3 and l.split()[1] in "Tt"]
        by_qual = defaultdict(list)
        for mg, de in demangle(mangled).items():
            q = de.find("(")
            if q > 0:
                by_qual[de[:q]].append((mg, param_types(de[q + 1:])))
        fixed = 0
        for addr, fn, sym, d, (_, types, line) in bad:
            hits = [mg for mg, ts in by_qual.get(d[: d.find("(")], []) if ts == types]
            if len(hits) != 1:
                print("cannot fix 0x%s (%d candidates): %s" % (addr, len(hits), line), file=sys.stderr)
                continue
            # One g4_relfn_N declaration can serve several entries, so give this entry
            # its own declaration instead of rewriting the shared one.
            decl_line = 'void %s(void) __asm__("%s");' % (fn, sym)
            entry = "{ 0x%su, reinterpret_cast<const void *>(&%s) }" % (addr, fn)
            new_fn = "%s_x%s" % (fn, addr)
            if decl_line not in src or entry not in src:
                continue
            k = src.index(decl_line)
            line_start = src.rfind("\n", 0, k) + 1
            indent = src[line_start:k]
            eol = "\r\n" if src[k:].split("\n", 1)[0].endswith("\r") else "\n"
            line_end = src.index("\n", k) + 1
            src = (src[:line_end] + '%svoid %s(void) __asm__("%s"); // overload fixed by audit_fnmap_overloads.py%s'
                   % (indent, new_fn, hits[0], eol) + src[line_end:])
            src = src.replace(entry, "{ 0x%su, reinterpret_cast<const void *>(&%s) }" % (addr, new_fn), 1)
            fixed += 1
        open(RELOC, "w", encoding="utf-8", newline="").write(src)
        print("fixed %d entries" % fixed, file=sys.stderr)


def fix_data_targets():
    """Entries whose symbol resolves to a data object (nm type B/D/b/d) in the built .so.

    Seen with vox::FileSystemInterface::_RemoveArchive & co: the decompiled method was
    renamed (RemoveArchive) while a static variable kept the x86 name, so the vtable
    slot pointed into .bss. Rebinds the entry to the function defined with that VA.
    """
    src = open(RELOC, encoding="utf-8", newline="").read()
    decl = dict(re.findall(r'void (g4_relfn_\w+)\(void\) __asm__\("([^"]+)"\);', src))
    entries = re.findall(r"\{ 0x([0-9a-f]+)u, reinterpret_cast<const void \*>\(&(g4_relfn_\w+)\) \}", src)
    raw = subprocess.run([NM, "--defined-only", SO], capture_output=True, text=True).stdout.split("\n")
    kinds = {}
    for l in raw:
        p = l.split()
        if len(p) == 3:
            kinds[p[2]] = p[1]
    funcs = [m for m, k in kinds.items() if k in "Tt"]
    by_qual = defaultdict(list)
    for mg, de in demangle(funcs).items():
        q = de.find("(")
        if q > 0:
            by_qual[de[:q]].append((mg, param_types(de[q + 1:])))
    va_defs = {}
    for q, lst in definitions().items():
        for va, types, line in lst:
            va_defs[va] = (q, types, line)
    fixed = 0
    for addr, fn in entries:
        sym = decl.get(fn)
        if not sym or kinds.get(sym, "T") not in "BbDd":
            continue
        d = va_defs.get(int(addr, 16))
        hits = [mg for mg, ts in by_qual.get(d[0], []) if ts == d[1]] if d else []
        if len(hits) != 1:
            print("data target 0x%s %s: no unique function (%s)" % (addr, sym, d[2] if d else "no def"), file=sys.stderr)
            continue
        entry = "{ 0x%su, reinterpret_cast<const void *>(&%s) }" % (addr, fn)
        decl_line = 'void %s(void) __asm__("%s");' % (fn, sym)
        k = src.index(decl_line)
        indent = src[src.rfind("\n", 0, k) + 1:k]
        eol = "\r\n" if src[k:].split("\n", 1)[0].endswith("\r") else "\n"
        line_end = src.index("\n", k) + 1
        new_fn = "%s_f%s" % (fn, addr)
        src = (src[:line_end] + '%svoid %s(void) __asm__("%s"); // was a data symbol; fixed by audit_fnmap_overloads.py%s'
               % (indent, new_fn, hits[0], eol) + src[line_end:])
        src = src.replace(entry, "{ 0x%su, reinterpret_cast<const void *>(&%s) }" % (addr, new_fn), 1)
        fixed += 1
        print("0x%s %s -> %s" % (addr, sym, hits[0]))
    open(RELOC, "w", encoding="utf-8", newline="").write(src)
    print("rebound %d entries that pointed at data symbols" % fixed, file=sys.stderr)


if __name__ == "__main__":
    if "--fix-data" in sys.argv:
        fix_data_targets()
    else:
        main()
