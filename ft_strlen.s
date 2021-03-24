bits 64
global _ft_strlen

_ft_strlen :
	xor	rcx, rcx
	xor	rax, rax

loop :
	cmp	byte[rdi + rcx], 0
	jz	return
	inc	rcx
	jmp	loop

return :
	mov	rax, rcx
	ret
