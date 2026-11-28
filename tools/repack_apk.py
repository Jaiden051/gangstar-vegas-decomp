#!/usr/bin/env python3
"""Repack an original Gangstar Vegas APK with rebuilt native libraries.

  python tools/repack_apk.py ORIGINAL.apk OUT.apk --lib build-armv7/libGangstar4.so \
      --lib build-armv7/libgenerator.so [--abi armeabi-v7a] [--drop-abi x86] [--key debug-key.pem]

* replaces lib/<abi>/<name> for every --lib (strip them first with llvm-strip)
* drops lib/<abi>/ for every --drop-abi and the old META-INF signature
* aligns stored entries like zipalign (4 bytes, 4096 for .so)
* signs with an APK v1 (JAR) signature, SHA-256 / RSA, using --key
  (a PEM with private key + self-signed cert; created if missing)

Requires: pip install cryptography
v1-only signing is accepted for this app because it targets an old SDK.
Keep the key: Android only installs an update over an app signed with the same key.
"""
import argparse
import base64
import datetime
import hashlib
import os
import struct
import sys
import zipfile

from cryptography import x509
from cryptography.hazmat.primitives import hashes, serialization
from cryptography.hazmat.primitives.asymmetric import rsa
from cryptography.hazmat.primitives.serialization import pkcs7
from cryptography.x509.oid import NameOID

CREATED_BY = "1.0 (gangstar-vegas-decomp repack_apk.py)"


def load_or_create_key(path):
    if os.path.exists(path):
        data = open(path, "rb").read()
        key = serialization.load_pem_private_key(data, password=None)
        cert = x509.load_pem_x509_certificate(data)
        return key, cert
    key = rsa.generate_private_key(public_exponent=65537, key_size=2048)
    name = x509.Name([x509.NameAttribute(NameOID.COMMON_NAME, "Android Debug"),
                      x509.NameAttribute(NameOID.ORGANIZATION_NAME, "Android"),
                      x509.NameAttribute(NameOID.COUNTRY_NAME, "US")])
    now = datetime.datetime.now(datetime.timezone.utc)
    cert = (x509.CertificateBuilder().subject_name(name).issuer_name(name)
            .public_key(key.public_key()).serial_number(x509.random_serial_number())
            .not_valid_before(now - datetime.timedelta(days=1))
            .not_valid_after(now + datetime.timedelta(days=365 * 30))
            .sign(key, hashes.SHA256()))
    with open(path, "wb") as f:
        f.write(key.private_bytes(serialization.Encoding.PEM, serialization.PrivateFormat.PKCS8,
                                  serialization.NoEncryption()))
        f.write(cert.public_bytes(serialization.Encoding.PEM))
    print("created signing key", path)
    return key, cert


def manifest_line(text):
    """Encode one manifest header, wrapping at 72 bytes per the JAR spec."""
    raw = text.encode("utf-8")
    out, first = [], True
    while raw:
        n = 72 if first else 71
        out.append((b"" if first else b" ") + raw[:n])
        raw, first = raw[n:], False
    return b"\r\n".join(out) + b"\r\n"


def b64sha256(data):
    return base64.b64encode(hashlib.sha256(data).digest()).decode()


def write_aligned(zout, info, data):
    """Write an entry, padding the local header extra so stored data is aligned."""
    info.extra = b""
    if info.compress_type == zipfile.ZIP_STORED:
        align = 4096 if info.filename.endswith(".so") else 4
        offset = zout.fp.tell()
        name_len = len(info.filename.encode("utf-8"))
        data_start = offset + 30 + name_len + 6  # 6 = minimal 0xD935 extra
        pad = (-data_start) % align
        info.extra = struct.pack("<HHH", 0xD935, 2 + pad, align) + b"\0" * pad
    zout.writestr(info, data)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("apk")
    ap.add_argument("out")
    ap.add_argument("--lib", action="append", default=[], help="rebuilt .so to put in lib/<abi>/")
    ap.add_argument("--abi", default="armeabi-v7a")
    ap.add_argument("--drop-abi", action="append", default=[])
    ap.add_argument("--key", default="debug-key.pem")
    args = ap.parse_args()

    replace = {"lib/%s/%s" % (args.abi, os.path.basename(p)): p for p in args.lib}
    drop = tuple("lib/%s/" % a for a in args.drop_abi)
    key, cert = load_or_create_key(args.key)

    mf = [manifest_line("Manifest-Version: 1.0"), manifest_line("Created-By: " + CREATED_BY), b"\r\n"]
    sf_entries = []
    seen = set()

    with zipfile.ZipFile(args.apk) as zin, zipfile.ZipFile(args.out, "w", allowZip64=False) as zout:
        for item in zin.infolist():
            name = item.filename
            if name.startswith("META-INF/") and name.upper().endswith((".MF", ".SF", ".RSA", ".DSA", ".EC")):
                continue
            if name.startswith(drop) or item.is_dir():
                continue
            if name in replace:
                data = open(replace[name], "rb").read()
                seen.add(name)
            else:
                data = zin.read(name)
            info = zipfile.ZipInfo(name, date_time=item.date_time)
            info.compress_type = item.compress_type
            info.external_attr = item.external_attr
            write_aligned(zout, info, data)
            section = manifest_line("Name: " + name) + manifest_line("SHA-256-Digest: " + b64sha256(data)) + b"\r\n"
            mf.append(section)
            sf_entries.append((name, section))

        missing = set(replace) - seen
        for name in sorted(missing):  # ABI dir that did not exist before
            data = open(replace[name], "rb").read()
            info = zipfile.ZipInfo(name, date_time=(2015, 4, 29, 17, 55, 0))
            info.compress_type = zipfile.ZIP_DEFLATED
            write_aligned(zout, info, data)
            section = manifest_line("Name: " + name) + manifest_line("SHA-256-Digest: " + b64sha256(data)) + b"\r\n"
            mf.append(section)
            sf_entries.append((name, section))

        manifest = b"".join(mf)
        sf = [manifest_line("Signature-Version: 1.0"),
              manifest_line("SHA-256-Digest-Manifest: " + b64sha256(manifest)),
              manifest_line("Created-By: " + CREATED_BY), b"\r\n"]
        for name, section in sf_entries:
            sf.append(manifest_line("Name: " + name) + manifest_line("SHA-256-Digest: " + b64sha256(section)) + b"\r\n")
        sigfile = b"".join(sf)
        sig = (pkcs7.PKCS7SignatureBuilder().set_data(sigfile)
               .add_signer(cert, key, hashes.SHA256())
               .sign(serialization.Encoding.DER,
                     [pkcs7.PKCS7Options.DetachedSignature, pkcs7.PKCS7Options.NoAttributes]))

        for name, data in (("META-INF/MANIFEST.MF", manifest), ("META-INF/CERT.SF", sigfile),
                           ("META-INF/CERT.RSA", sig)):
            info = zipfile.ZipInfo(name, date_time=(2015, 4, 29, 17, 55, 0))
            info.compress_type = zipfile.ZIP_DEFLATED
            write_aligned(zout, info, data)

    print("replaced:", ", ".join(sorted(seen | missing)) or "(nothing)")
    if args.drop_abi:
        print("dropped ABIs:", ", ".join(args.drop_abi))
    print("wrote", args.out, os.path.getsize(args.out), "bytes")


if __name__ == "__main__":
    main()
