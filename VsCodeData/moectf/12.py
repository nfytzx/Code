import requests
import re

base_url = "http://127.0.0.1:44830"

with open(r"D:\VsCodeData\moectf\guji_catalog.txt", "r") as f:
    paths = [line.strip() for line in f if line.strip()]

flag_pat = re.compile(r"flag\{[^}]+\}", re.IGNORECASE)

for path in paths:
    url = f"{base_url}/{path}"
    try:
        resp = requests.get(url, timeout=5, allow_redirects=True)
        if flag_pat.search(resp.text):
            print(f"[+] Found flag at: {path}")
            print(flag_pat.search(resp.text).group())
            break
    except Exception as e:
        print(f"[-] {path} error: {e}")
else:
    # 如果没找到，单独试一下 true_file
    print("[*] Try /true_file")
    r = requests.get(f"{base_url}/true_file")
    print(r.text)