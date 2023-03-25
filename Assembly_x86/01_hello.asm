section .data
    text db "hello, World",10

section .text
    global _start

_start:
    mov rax, 1 ; rax : contains the id of the syscall
    mov rdi, 1 ; This is a comment in assembly
    mov rsi, text
    mov rdx, 14
    syscall

    mov rax, 60
    mov rdi, 0
    syscall

