bits 64
global _ft_read
extern ___error

_ft_read :
	mov		rax, 0x2000003
	syscall
	jc		set_error
	ret

set_error :
	mov		edi, eax
	call	___error
	mov		[rax], rdi
	mov		rax, -1
	ret
