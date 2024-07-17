section .data
    str: db "Hello, World",0xa
    strlen: equ $-str
    
section	.text
 global main

  main:
    mov eax,4
    mov ebx,1
    mov ecx,str
    mov edx,strlen
    int 0x80
    
    mov eax,1
    mov ebx,0
    int 0x80
