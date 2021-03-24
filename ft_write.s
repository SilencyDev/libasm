bits 64
global _ft_write
extern ___error

_ft_write :
	mov		rax, 0x2000004
	syscall
	jc		set_error
	ret

set_error :
	mov		edi, eax
	call	___error
	mov		[rax], rdi
	mov		rax, -1
	ret
