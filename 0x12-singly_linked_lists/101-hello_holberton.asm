section .data
	message db 'Hello, Holberton', 10

section .text
	global main
	extern printf

main:
	push message
	push qword 0
	call printf
	add rsp, 16
	mov eax, 0
	ret
