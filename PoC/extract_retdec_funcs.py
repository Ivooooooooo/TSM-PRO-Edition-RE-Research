import os
import re

SRC = r"\\Desktop\Sandbox\retdec-out\TSM-chipsets.c"
OUT = r"\\Desktop\Sandbox\retdec-out\chipsets"
os.makedirs(OUT, exist_ok=True)

funcs = {
    "qualcomm_qPerformTask": ("123f904", "Qualcomm qcom::Qualcomm::qPerformTask"),
    "mtk_mPerformTask": ("14c0100", "MTK MTKCommIO::mPerformTask"),
    "spd_uPerformTask": ("12dc4b8", "SPD qsprd::SPDCommIO::uPerformTask"),
    "kirin_hPerformTask": ("a0d640", "Kirin/Hisi hPerformTask"),
    "fastboot_fPerformTask": ("d5e70c", "Fastboot fPerformTask"),
    "adb_aPerformTask": ("aabee8", "ADB aPerformTask"),
    "exynos_ePerformTask": ("1188f30", "Exynos ePerformTask"),
    "samsung_sPerformTask": ("d37824", "Samsung sPerformTask"),
}

lines = open(SRC, encoding="utf-8", errors="replace").read().splitlines()
print("lines", len(lines))

for outname, (addr, desc) in funcs.items():
    pat = re.compile(rf"int32_t function_{addr}\s*\(")
    start = None
    for i, line in enumerate(lines):
        if pat.search(line) and "{" in line:
            start = i
            break
    if start is None:
        print("NOT FOUND", outname, addr)
        continue
    pre = start
    while pre > 0 and (lines[pre - 1].lstrip().startswith("//") or lines[pre - 1].strip() == ""):
        pre -= 1
    depth = 0
    end = None
    for i in range(start, len(lines)):
        depth += lines[i].count("{") - lines[i].count("}")
        if depth == 0 and i > start:
            end = i
            break
    if end is None:
        print("NO END", outname)
        continue
    body = "\n".join(lines[pre:end + 1])
    path = os.path.join(OUT, outname + ".c")
    with open(path, "w", encoding="utf-8") as f:
        f.write(f"// {desc}\n// Entry VA: 0x{addr}\n// Extracted from TSM-chipsets.c (RetDec v5.0).\n\n")
        f.write(body)
        f.write("\n")
    print(outname, "lines", end - pre + 1, "bytes", os.path.getsize(path))
