bits 64
global _ft_strcpy

_ft_strcpy :
	xor	rcx, rcx
	xor	rax, rax
	xor	dl, dl

loop :
	cmp	byte[rsi + rcx], 0
	jz	return
	mov	dl, byte[rsi + rcx]
	mov	byte[rdi + rcx], dl
	inc	rcx
	jmp	loop

return :
	mov	byte[rdi + rcx], 0
	mov	rax, rdi
	ret
