.intel_syntax noprefix

.global _start

_start:
mov rdi, 1
mov rax, 60
syscall