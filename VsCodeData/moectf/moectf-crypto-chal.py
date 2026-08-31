from pwn import *

host = '127.0.0.1'
port = 3898

r = remote(host, port)

# 第一次接收菜单（或直接发送）
r.recvuntil(b'3. quit.')
r.sendline(b'1')   # 选择加密

# 等待加密提示并发送带前导零的十六进制明文
r.recvuntil(b'what message(hex form) do u want to encrtpt?\n')
r.sendline(b'004d6f654354462032303236')   # b'\x00MoeCTF 2026'

# 接收密文
c = int(r.recvline().strip())

# 再次回到菜单，选择提交
r.recvuntil(b'3. quit.')
r.sendline(b'2')

# 等待提交提示，发送密文
r.recvuntil(b'plz sumbit the ciphertext.\n')
r.sendline(str(c).encode())

# 获取结果（flag）
print(r.recvall().decode())