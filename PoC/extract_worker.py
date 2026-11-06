import os
import re

src = r"\\Desktop\Sandbox\retdec-out\TSM-chipsets.c"
out = r"\\Desktop\Sandbox\retdec-out\chipsets\worker_run.c"
lines = open(src, encoding="utf-8", errors="replace").read().splitlines()
pat = re.compile(r"int32_t function_136ffcc\s*\(")
start = None
for i, line in enumerate(lines):
    if pat.search(line) and "{" in line:
        start = i
        break
if start is None:
    print("not found")
    raise SystemExit
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
body = "\n".join(lines[pre:end + 1])
with open(out, "w", encoding="utf-8") as f:
    f.write("// Worker::run - dispatcher for all chipset PerformTask calls\n")
    f.write("// Entry VA: 0x136ffcc\n")
    f.write("// Extracted from TSM-chipsets.c (RetDec v5.0).\n\n")
    f.write(body + "\n")
print("worker_run lines", end - pre + 1, "bytes", os.path.getsize(out))
