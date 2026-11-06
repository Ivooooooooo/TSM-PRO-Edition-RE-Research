"""One-time capture of the real TSM model blob.

Usage:
    python capture_models.py --email you@example.com --password secret

It performs the same login the client does (GET with an AES body), decrypts
the real response to obtain the session Token, then calls the model sync
endpoint and saves its raw hex response as models_blob.hex.  The local auth
addon serves that blob for /XM7R2K5P8W forever afterwards.
"""

import argparse
import http.client
import json
import os
import sys
import time

from Crypto.Cipher import AES

HERE = os.path.dirname(os.path.abspath(__file__))
LOGS = os.path.join(HERE, "logs")
TEMPLATE = os.path.join(LOGS, "login_request_template.json")
KEY = b"64e04cbc4ff5d9f957322a808c087f2f"
IV = b"51985c8f03b2fbd5"
SUFFIX = b"X*DEX$YE#2024"
HOST = "www.tsm-tool.com"
LOGIN_PATH = "/L9435eKcw"
MODELS_PATH = "/XM7R2K5P8W"
MODELS_BLOB = os.path.join(HERE, "models_blob.hex")


def pad_iso(data: bytes) -> bytes:
    pad = 16 - (len(data) % 16)
    return data + b"\x80" + b"\x00" * (pad - 1)


def unpad_iso(data: bytes) -> bytes:
    i = len(data) - 1
    while i >= 0 and data[i] == 0:
        i -= 1
    if i >= 0 and data[i] == 0x80:
        return data[:i]
    return data


def unpad_pkcs7(data: bytes) -> bytes:
    if not data:
        return data
    n = data[-1]
    if 1 <= n <= 16 and data[-n:] == bytes([n]) * n:
        return data[:-n]
    return data


def encrypt_hex(obj: dict) -> str:
    body = json.dumps(obj, separators=(",", ":")).encode() + SUFFIX
    ct = AES.new(KEY, AES.MODE_CBC, IV).encrypt(pad_iso(body))
    return ct.hex()


def decrypt_body(raw: bytes) -> bytes:
    text = raw.strip()
    try:
        blob = bytes.fromhex(text.decode())
    except ValueError:
        blob = raw
    if not blob or len(blob) % 16:
        return raw
    pt = AES.new(KEY, AES.MODE_CBC, IV).decrypt(blob)
    pt = unpad_pkcs7(unpad_iso(pt))
    if pt.endswith(SUFFIX):
        pt = pt[: -len(SUFFIX)]
    return pt


def post_get(host: str, path: str, body: bytes | None = None, timeout=40) -> tuple[int, bytes, dict]:
    conn = http.client.HTTPSConnection(host, 443, timeout=timeout)
    headers = {
        "User-Agent": "Mozilla/5.0",
        "Accept": "*/*",
        "Connection": "keep-alive",
    }
    try:
        conn.request("GET", path, body=body, headers=headers)
        resp = conn.getresponse()
        data = resp.read()
        return resp.status, data, dict(resp.getheaders())
    finally:
        conn.close()


def load_template(email: str, password: str) -> dict:
    if os.path.exists(TEMPLATE):
        with open(TEMPLATE, "r", encoding="utf-8") as f:
            obj = json.load(f)
    else:
        obj = {
            "CurrentVersion": "2026.10.27-1925",
            "TSM_EDITION": "2026.10.27-1925",
            "Serial": "2611AF44B1BED28030765EBDC5E4A9F1",
        }
    obj["Email"] = email
    obj["Password"] = password
    return obj


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--email", required=True)
    ap.add_argument("--password", required=True)
    args = ap.parse_args()

    os.makedirs(LOGS, exist_ok=True)
    req = load_template(args.email, args.password)
    body = encrypt_hex(req).encode()
    print(f"login request: {len(body)} bytes")
    status, raw, headers = post_get(HOST, LOGIN_PATH, body=body)
    print("login status", status, "len", len(raw))
    plain = decrypt_body(raw)
    print("login plain:", plain[:400])
    try:
        login_obj = json.loads(plain.decode("utf-8", errors="replace"))
    except ValueError:
        print("login response is not JSON; aborting")
        return 2
    with open(os.path.join(LOGS, "login_real.json"), "w", encoding="utf-8") as f:
        f.write(json.dumps(login_obj, indent=2))
    if str(login_obj.get("Login", "")).lower() != "login success":
        print("server did not accept the account:", login_obj.get("Login") or login_obj.get("Info"))
        return 3
    token = login_obj.get("Token") or login_obj.get("token")
    if not token:
        print("no Token in login response; cannot sync models")
        return 4

    serial = login_obj.get("Serial") or req.get("Serial")
    sync = {
        "Email": args.email,
        "Password": args.password,
        "Serial": serial,
        "Token": token,
        "lite": "0",
    }
    data = encrypt_hex(sync)
    print("models request: Data", len(data), "hex chars")
    status, raw, headers = post_get(HOST, f"{MODELS_PATH}?Data={data}")
    print("models status", status, "len", len(raw))
    if status != 200:
        print("models plain:", decrypt_body(raw)[:300])
        return 5
    # Save the raw hex exactly as the client receives it.
    text = raw.strip()
    try:
        bytes.fromhex(text.decode())
        hex_text = text.decode()
    except ValueError:
        hex_text = raw.hex()
    with open(MODELS_BLOB, "w", encoding="ascii") as f:
        f.write(hex_text)
    print("saved", MODELS_BLOB, len(hex_text), "hex chars")
    pt = decrypt_body(raw)
    print("models plain (first 300):", pt[:300])
    return 0


if __name__ == "__main__":
    sys.exit(main())
