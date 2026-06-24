.intel_syntax noprefix

.global _start

_start:

mov rdi, 1
mov rsi, [rsp+16]
mov rdx, 1
mov rax, 1
syscall

mov rdi, 42
mov rax, 60
syscall
