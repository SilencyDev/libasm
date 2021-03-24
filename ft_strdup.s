bits 64
global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc
extern ___error

_ft_strdup :
	call	_ft_strlen
	push	rdi
	inc		rax
	mov		rdi, rax
	call	_malloc
	cmp		rax, 0
	jz		error
	mov		rdi, rax
	pop		rsi
	call	_ft_strcpy
	ret
error :
	neg		rax
	mov		rdi, rax
	call	___error
	mov		[rax], rdi
	mov		rax, -1
	ret
