section .data
string db "Hello, Holberton",10
section .text
global_start
start:
mov rax,1
mov rdi,1
mov rsi, string
mov rdx, 18
syscall
