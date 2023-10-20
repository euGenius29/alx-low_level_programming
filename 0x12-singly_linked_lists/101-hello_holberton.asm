message: db "Hello, Holberton!\n", 0

global main

section .text
extern printf

main:
	mov rsi, message

	call printf

	mov rax, 60
	xor rdi, rdi
	syscall
