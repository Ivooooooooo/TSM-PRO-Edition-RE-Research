"""Fake TSM login/auth relay addon for mitmproxy.

The real TSM client sends an AES-256-CBC encrypted request to
https://www.tsm-tool.com/<token> and expects an encrypted JSON reply.
This addon answers every tsm-tool.com request with a genuine, encrypted
"login success" payload so the client opens its main window.
"""

import json
import os
import time

from Crypto.Cipher import AES
from mitmproxy import http

KEY = b"64e04cbc4ff5d9f957322a808c087f2f"
IV = b"51985c8f03b2fbd5"
SUFFIX = b"X*DEX$YE#2024"

# Fields matter: "Annual": true is what lets the client keep the success
# flag set (otherwise it resets it while loading the plan/expiry panel).
PAYLOAD = {
    "Login": "Login Success",
    "Annual": True,
    "Balance": False,
    "Token": "0123456789abcdef0123456789abcdef",
    "Country": "US",
    "Version": "2026.10.27-1925",
    "Days": 365,
    "CurrentPlan": "PRO",
    "CurrentPlanName": "PRO",
    "ActivatedDate": "2026-11-05",
    "msg": "",
}

HERE = os.path.dirname(os.path.abspath(__file__))
LOG_DIR = os.path.join(HERE, "logs")
os.makedirs(LOG_DIR, exist_ok=True)
REQ_LOG = os.path.join(LOG_DIR, "requests.log")
SERVED_MARK = os.path.join(LOG_DIR, "login_served.txt")
MODELS_BLOB = os.path.join(HERE, "models_blob.hex")


def load_models_blob():
    if not os.path.exists(MODELS_BLOB):
        return None
    try:
        text = open(MODELS_BLOB, "r", encoding="ascii").read().strip()
        if not text:
            return None
        try:
            return bytes.fromhex(text)
        except ValueError:
            return text.encode()
    except OSError:
        return None


def encrypt_response(obj: dict) -> bytes:
    body = json.dumps(obj, separators=(",", ":")).encode() + SUFFIX
    pad = 16 - (len(body) % 16)
    body = body + bytes([pad]) * pad
    ct = AES.new(KEY, AES.MODE_CBC, IV).encrypt(body)
    return ct.hex().encode()


class FakeLoginCrypto:
    def request(self, flow: http.HTTPFlow):
        if "tsm-tool.com" not in flow.request.pretty_host:
            return
        try:
            with open(REQ_LOG, "a", encoding="utf-8") as f:
                f.write(f"{time.time()} {flow.request.method} {flow.request.pretty_url}\n")
        except OSError:
            pass

    def response(self, flow: http.HTTPFlow):
        if "tsm-tool.com" not in flow.request.pretty_host:
            return

        path = flow.request.path.split("?")[0]

        # If we captured the real model catalogue once, serve it verbatim for
        # the sync endpoint so the model list/search works offline.
        if "XM7R2K5P8W" in path:
            blob = load_models_blob()
            if blob:
                flow.response = http.Response.make(
                    200, blob, {"Content-Type": "text/plain", "Connection": "keep-alive"}
                )
                try:
                    with open(REQ_LOG, "a", encoding="utf-8") as f:
                        f.write(f"  -> cached models blob ({len(blob)} bytes) {path}\n")
                except OSError:
                    pass
                return
            # No real catalogue captured yet: return an intentionally invalid
            # body so the client falls back to its built-in model list instead
            # of treating the login JSON as an empty model catalogue.
            flow.response = http.Response.make(
                200, b"no-models", {"Content-Type": "text/plain", "Connection": "keep-alive"}
            )
            try:
                with open(REQ_LOG, "a", encoding="utf-8") as f:
                    f.write(f"  -> invalid models response (force local fallback) {path}\n")
            except OSError:
                pass
            return

        out = encrypt_response(PAYLOAD)
        flow.response = http.Response.make(
            200, out, {"Content-Type": "text/plain", "Connection": "keep-alive"}
        )

        try:
            with open(REQ_LOG, "a", encoding="utf-8") as f:
                f.write(f"  -> fake 200 ({len(out)} bytes) {path}\n")
            # The login endpoint is the short one; mark it so the launcher
            # knows the proxy is no longer needed system-wide.
            if path and "/" in path and len(path) <= 16 and "XM7R2K5P8W" not in path:
                with open(SERVED_MARK, "w", encoding="utf-8") as f:
                    f.write(str(time.time()))
        except OSError:
            pass


addons = [FakeLoginCrypto()]
