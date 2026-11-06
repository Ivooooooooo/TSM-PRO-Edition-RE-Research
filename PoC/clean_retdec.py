import os
import re

SRC_DIR = r"\\Desktop\Sandbox\retdec-out\chipsets"
OUT_DIR = os.path.join(SRC_DIR, "clean")
os.makedirs(OUT_DIR, exist_ok=True)

# Known function address -> readable name.
FUNC_MAP = {
    "123f904": "Qualcomm_qPerformTask",
    "14c0100": "MTK_mPerformTask",
    "12dc4b8": "SPD_uPerformTask",
    "a0d640": "Hisi_hPerformTask",
    "d5e70c": "Fastboot_fPerformTask",
    "aabee8": "ADB_aPerformTask",
    "1188f30": "Exynos_ePerformTask",
    "d37824": "Samsung_sPerformTask",
    "136ffcc": "Worker_run",
    # inferred/known sub-methods
    "124940c": "Qualcomm_connect",
    "124a470": "Qualcomm_task16",
    "14d6658": "MTK_connect",
    "14e7024": "MTK_task16",
    "12e4128": "SPD_init",
    "12ee210": "SPD_connect",
    "a0ba60": "Hisi_initOrConnect",
    "d625bc": "Fastboot_specialTask",
    # Qt helpers (best-effort names)
    "1324a28": "qt_QString",
    "1324920": "qt_QString_dtor",
    "13248c4": "qt_QString_append",
    "13248d8": "qt_QString_append",
    "13248ec": "qt_QString_append",
    "1324b2c": "qt_intToVariant",
    "1324afc": "qt_toString",
    "1324bf0": "qt_toVariant",
    "1323be0": "qt_QVariant",
    "1323a90": "qt_QVariant",
    "1323ab0": "qt_QVariant",
    "1323950": "qt_QVariant",
    "1323990": "qt_QVariant",
    "13239b0": "qt_QVariant",
    "13239f0": "qt_QVariant",
    "13afe3c": "qt_QString",
    "13b1058": "qt_QString_dtor",
    "13b049c": "qt_QString",
    "13b02c4": "qt_QString",
    "13b03f0": "qt_QString",
    "13b0198": "qt_QString",
    "13b1a70": "qt_QString_assign",
    "13b0de0": "qt_QString_dtor",
    "13b0ff0": "qt_QString",
    "117ebf0": "qt_qDebug",
    "8f2860": "qt_qDebug",
    "196c050": "qt_emit_signal",
    "15ccec0": "qt_qobject_cast",
    "1585330": "qt_QString_ref",
    "1481be0": "qt_QVariant",
    "1481b50": "qt_QVariant",
    "1481d00": "qt_QVariant",
    "14822e0": "qt_QVariant",
    "1482330": "qt_QVariant",
    "1324c18": "qt_QVariant_dtor",
    "1324d10": "qt_QVariant",
    "1802010": "qt_contains",
    "17fbe50": "qt_QString_arg",
    "157d470": "qt_QStringList_init",
    "13ac090": "qt_QString",
    "13ac6c0": "qt_QString",
    "13acb10": "qt_QString",
    "1393660": "qt_QString",
    "1393820": "qt_QString",
    "13aa6e0": "qt_QString",
    "13aa740": "qt_QString",
    "13aa760": "qt_QString",
    "13aea00": "qt_?",
    "13ab574": "qt_?",
    "13b1260": "qt_?",
    "13b0904": "qt_?",
    "13b10c0": "qt_QString_dtor",
    "13b108c": "qt_QString_dtor",
    "13b1538": "qt_?",
    "13b1364": "qt_?",
    "13b122c": "qt_?",
    "13b0210": "qt_?",
    "13b0af8": "qt_?",
    "13b0a80": "qt_?",
    "13b01a0": "qt_?",
    "13b1a70": "qt_QString_assign",
    "13b1c78": "qt_QString",
    "13b1504": "qt_?",
    "13b1038": "qt_?",
    "13b156c": "qt_?",
    "13b16d8": "qt_QString_dtor",
    "13b19f4": "qt_?",
    "13b18f0": "qt_?",
    "13b0de0": "qt_QString_dtor",
    "13b0ff0": "qt_QString",
    "13b0a80": "qt_?",
    "13b0b30": "qt_?",
    "13b0c90": "qt_?",
    "13b0d10": "qt_?",
    "13b0e20": "qt_?",
    "13b0f70": "qt_?",
    "13b10c0": "qt_QString_dtor",
    "13b108c": "qt_QString_dtor",
    "13b1538": "qt_?",
    "13b1364": "qt_?",
    "13b122c": "qt_?",
}

# Manual self-variable mapping when detection is ambiguous.
SELF_MAP = {
    "qualcomm_qPerformTask": "v2",
    "mtk_mPerformTask": "v1",
    "spd_uPerformTask": None,
    "kirin_hPerformTask": "v1",
    "fastboot_fPerformTask": "v1",
    "adb_aPerformTask": "v1",
    "exynos_ePerformTask": "v3",
    "samsung_sPerformTask": None,
    "worker_run": "v1",
}

FIELD_OFFSETS = {
    "qualcomm_qPerformTask": {12: "state", 16: "task_type", 359: "read_forbidden", 368: "context", 393: "connected", 500: "extra_info"},
    "mtk_mPerformTask": {24: "task_type", 376: "flag178", 389: "flag185", 390: "flag186", 500: "extra_info"},
    "spd_uPerformTask": {168: "task_type", 511: "flag1FF", 1448: "extra_info"},
    "kirin_hPerformTask": {220: "task_type"},
    "fastboot_fPerformTask": {216: "task_type", 276: "state"},
    "adb_aPerformTask": {216: "task_type"},
    "exynos_ePerformTask": {16: "task_type", 359: "read_forbidden"},
    "samsung_sPerformTask": {12: "state", 16: "task_type", 375: "read_forbidden"},
    "worker_run": {320: "qualcomm_task", 324: "mtk_task", 332: "spd_task", 336: "hisi_task", 340: "fastboot_task", 344: "adb_task", 348: "exynos_task", 352: "samsung_task", 368: "context"},
}

FIELDS = {
    "qualcomm_qPerformTask": [
        ("+0x10", "task type"),
        ("+0x167", "read-forbidden flag"),
        ("+0x170", "context/task data"),
        ("+0x189", "connected flag"),
        ("+0x1F4", "extra info string"),
    ],
    "mtk_mPerformTask": [
        ("+0x18", "task type"),
        ("+0x178", "format/flag"),
        ("+0x185", "special flag"),
        ("+0x186", "flag copied from +0x6A"),
        ("+0x1F4", "extra info string"),
    ],
    "spd_uPerformTask": [
        ("+0xA8", "task type"),
        ("+0x1FF", "flag"),
        ("+0x5A8", "extra info string"),
    ],
    "kirin_hPerformTask": [("+0xDC", "task type")],
    "fastboot_fPerformTask": [("+0xD8", "task type"), ("+0x114", "result/state")],
    "adb_aPerformTask": [("+0xD8", "task type")],
    "exynos_ePerformTask": [("+0x10", "task type"), ("+0x167", "read-forbidden flag")],
    "samsung_sPerformTask": [("+0x10", "task type"), ("+0x177", "read-forbidden flag")],
    "worker_run": [
        ("+0x140", "Qualcomm task"),
        ("+0x144", "MTKCommIO task"),
        ("+0x14C", "SPDCommIO task"),
        ("+0x150", "HisiCommIO task"),
        ("+0x154", "Fastboot task"),
        ("+0x158", "ADB task"),
        ("+0x15C", "Exynos task"),
        ("+0x160", "Samsung task"),
        ("+0x170", "context/data"),
    ],
}


def detect_self(lines, entry):
    candidates = []
    for line in lines:
        m = re.match(r"\s*int32_t (v\d+); // 0x" + entry, line)
        if m:
            candidates.append(m.group(1))
    best = None
    best_score = -1
    for c in candidates:
        text = "\n".join(lines)
        if re.search(rf"\b{c}\s*=", text):
            continue
        score = len(re.findall(rf"\(\s*{c}\s*\+", text)) + len(re.findall(rf"{c}\s*\+", text))
        if score > best_score:
            best = c
            best_score = score
    return best


def clean(name, path):
    lines = open(path, encoding="utf-8", errors="replace").read().splitlines()
    body = "\n".join(lines)
    entry = re.search(r"Entry VA: 0x([0-9a-fA-F]+)", body)
    entry = entry.group(1).lower() if entry else "?"
    selfvar = SELF_MAP.get(name) or detect_self(lines, entry)
    if selfvar:
        body = re.sub(rf"\b{selfvar}\b", "self", body)

    # Rename known functions, leave others as sub_<addr>.
    def repl(m):
        addr = m.group(1).lower()
        return FUNC_MAP.get(addr, f"sub_{addr}")

    body = re.sub(r"\bfunction_([0-9a-fA-F]+)\b", repl, body)

    # Add inline comments for known self fields.
    fields = FIELD_OFFSETS.get(name, {})
    annotated = []
    for line in body.splitlines():
        fname = None
        for off, field in fields.items():
            if f"self + {off}" in line:
                fname = field
                break
        if fname and f"self->{fname}" not in line:
            if re.search(r"//\s*0x[0-9a-fA-F]+\s*$", line):
                line = re.sub(r"//\s*0x([0-9a-fA-F]+)\s*$", rf"// 0x\1 [self->{fname}]", line)
            elif "//" in line:
                line = line + f"  [self->{fname}]"
            else:
                line = line + f" // self->{fname}"
        annotated.append(line)
    body = "\n".join(annotated)

    # Remove the old 3-line header and add a clean one.
    body = re.sub(r"^// .*?\n// Entry VA: .*?\n// Extracted from .*?\n\n", "", body, flags=re.S)

    # Extract unique string literals for the header.
    strings = []
    seen = set()
    for s in re.findall(r'"([^"\\\r\n]{3,120})"', body):
        if s not in seen:
            seen.add(s)
            strings.append(s)
    key_strings = strings[:18]

    header = []
    header.append(f"/*")
    header.append(f" * {name}")
    header.append(f" * Entry VA: 0x{entry}")
    header.append(f" * Cleaned pseudocode from RetDec v5.0 (best-effort names/comments).")
    header.append(f" *")
    header.append(f" * Known fields (offsets from the object base):")
    for off, desc in FIELDS.get(name, []):
        header.append(f" *   self {off:6s} : {desc}")
    if key_strings:
        header.append(f" *")
        header.append(f" * Key strings observed:")
        for s in key_strings:
            header.append(f" *   \"{s}\"")
    header.append(f" *")
    header.append(f" * `self` is the original object pointer (this).")
    header.append(f" * Calls named `sub_<addr>` could not be resolved to a known method.")
    header.append(f" */")
    header.append("")

    out = os.path.join(OUT_DIR, name + ".clean.c")
    with open(out, "w", encoding="utf-8") as f:
        f.write("\n".join(header) + "\n" + body + "\n")
    print(name, "self=" + str(selfvar), "bytes", os.path.getsize(out))


for fn in sorted(os.listdir(SRC_DIR)):
    if fn.endswith(".c") and not fn.startswith("chipsets_all"):
        name = fn[:-2]
        clean(name, os.path.join(SRC_DIR, fn))
