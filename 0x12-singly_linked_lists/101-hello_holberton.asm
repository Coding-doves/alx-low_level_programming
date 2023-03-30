global main

section .data
	msg: db "Hello, Holberton", 0xA
	msglength: equ $ - msg

section .text
main:
	; Write the message to stdout
	mov eax, 0x4         ; System call number for write
	mov ebx, 0x1         ; File descriptor for stdout
	mov ecx, msg         ; Address of message to write
	mov edx, msglength   ; Length of message
	int 0x80             ; Call kernel

	; Exit the program with status code 0
	mov eax, 0x1         ; System call number for exit
	xor ebx, ebx         ; Status code 0
	int 0x80             ; Call kernel

