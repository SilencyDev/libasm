global _ft_read

_ft_read :
	mov		rax, 0
	syscall
	cmp		rax, 0
	jl		error
	ret

error :
	neg		rax
	mov		rdi, rax
	call	___error
	mov		[rax], rdi
	mov		rax, -1
	ret
