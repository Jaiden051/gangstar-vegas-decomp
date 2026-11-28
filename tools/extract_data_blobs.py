#!/usr/bin/env python3
"""Extract the RO/RW data images that GlobalSymbols.cpp `.incbin`s.

The decompiled sources reference the original game's data by its virtual
address in the *x86* build of libGangstar4.so (v1.8.2f):

  g4_rodata_image  = .rodata              VA 0x01b14c40, 0x2232fc bytes
  g4_rwdata_image  = second PT_LOAD (RW)  VA 0x020307e0, 0x112ac8 bytes
                     (file-backed part 0xa036c bytes -> g4_rwdata_init.bin,
                      the rest is .bss and is emitted as .zero)

These blobs are proprietary game data and are never committed (see
.gitignore). Generate them from your own copy of the game:

  python tools/extract_data_blobs.py path/to/x86/libGangstar4.so

The APK contains it at lib/x86/libGangstar4.so. Output is written next to
GlobalSymbols.cpp (G4_UP8Shop/sources/Core/Data/) unless --out is given.
"""
import argparse
import hashlib
import os
import struct
import sys

EXPECTED_RO_VA = 0x01B14C40
EXPECTED_RO_SIZE = 2241276
EXPECTED_RW_VA = 0x020307E0
EXPECTED_RW_MEMSZ = 1125064
EXPECTED_RW_FILESZ = 656236

PT_LOAD = 1
PF_W = 2


def read_elf32(data):
    if data[:4] != b"\x7fELF" or data[4] != 1 or data[5] != 1:
        sys.exit("error: not a 32-bit little-endian ELF")
    e_machine = struct.unpack_from("<H", data, 18)[0]
    e_phoff, e_shoff = struct.unpack_from("<II", data, 28)
    e_phentsize, e_phnum, e_shentsize, e_shnum, e_shstrndx = struct.unpack_from("<HHHHH", data, 42)

    phdrs = [struct.unpack_from("<IIIIIIII", data, e_phoff + i * e_phentsize) for i in range(e_phnum)]
    shdrs = [struct.unpack_from("<IIIIIIIIII", data, e_shoff + i * e_shentsize) for i in range(e_shnum)]
    strtab_off = shdrs[e_shstrndx][4]

    def sec_name(sh):
        start = strtab_off + sh[0]
        return data[start:data.index(b"\0", start)].decode()

    sections = {sec_name(sh): sh for sh in shdrs}
    return e_machine, phdrs, sections


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("so", help="x86 libGangstar4.so from Gangstar Vegas v1.8.2f")
    ap.add_argument("--out", default=os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                                  "..", "G4_UP8Shop", "sources", "Core", "Data"))
    args = ap.parse_args()

    with open(args.so, "rb") as f:
        data = f.read()

    e_machine, phdrs, sections = read_elf32(data)
    if e_machine != 3:  # EM_386
        sys.exit("error: this is not the x86 build (e_machine=%d). The sources' addresses come from "
                 "lib/x86/libGangstar4.so, not armeabi-v7a." % e_machine)

    ro = sections.get(".rodata")
    if ro is None:
        sys.exit("error: no .rodata section")
    ro_va, ro_off, ro_size = ro[3], ro[4], ro[5]

    rw = [p for p in phdrs if p[0] == PT_LOAD and p[6] & PF_W]
    if len(rw) != 1:
        sys.exit("error: expected exactly one writable PT_LOAD, found %d" % len(rw))
    _, rw_off, rw_va, _, rw_filesz, rw_memsz, _, _ = rw[0]

    got = (ro_va, ro_size, rw_va, rw_memsz, rw_filesz)
    want = (EXPECTED_RO_VA, EXPECTED_RO_SIZE, EXPECTED_RW_VA, EXPECTED_RW_MEMSZ, EXPECTED_RW_FILESZ)
    if got != want:
        sys.exit("error: layout mismatch (wrong game version?)\n  got  ro=%#x+%#x rw=%#x mem=%#x file=%#x\n"
                 "  want ro=%#x+%#x rw=%#x mem=%#x file=%#x" % (got + want))

    os.makedirs(args.out, exist_ok=True)
    for name, blob in (("g4_rodata_image.bin", data[ro_off:ro_off + ro_size]),
                       ("g4_rwdata_init.bin", data[rw_off:rw_off + rw_filesz])):
        path = os.path.join(args.out, name)
        with open(path, "wb") as f:
            f.write(blob)
        print("%-22s %8d bytes  sha1 %s" % (name, len(blob), hashlib.sha1(blob).hexdigest()))
    print("written to", os.path.normpath(args.out))


if __name__ == "__main__":
    main()
