section .text
	global my_start

	my_start:
		mov edx, len
		mov ecx, msg
		mov ebx, 1
		mov eax, 4
		int 0x80

		mov eax, 1
		int 0x80

section .data
	msg db "Hello, Holberton", 0xa
	len equ $ - msg
