	.file	"HolaMundo.c"
	.text
	.section	.rodata
.LC0:
	.string	"Hola Mundo"
	.text
	.globl	main
	.type	main, @function
.LC1:
	.string "Presione una tecla para continuar"
	.text
	.globl main 
	.type main, @function

main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$.LC0, %edi
	call	puts
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 11.2.1 20220127 (Red Hat 11.2.1-9)"
	.section	.note.GNU-stack,"",@progbits
