	global	main
	extern	printf
	section	.text
main:
	mov	rdi, message
	mov	al,0
	call	printf
	ret
message:
	db	"Hello, Holberton", 10, 0
