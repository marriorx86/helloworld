section .data
    hello db "Hello, Worl", 0

section .text

global get_hello
get_hello:
    mov rax, hello
    ret
