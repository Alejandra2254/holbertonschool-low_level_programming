	section .data
	message db "Hello, Holberton!", 10
	section .text
	global main
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 18
	syscall
	mov rax, 60
	mov rdi, 0
	        syscall
