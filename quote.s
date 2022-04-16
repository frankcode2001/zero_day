	.file	"quote.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movabsq	$8386098829109522017, %rax
	movabsq	$8007511615042318368, %rdx
	movq	%rax, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movabsq	$8316213871423594598, %rax
	movabsq	$2336371389347624224, %rdx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movabsq	$7021797107412312098, %rax
	movabsq	$3202729420597971744, %rdx
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movabsq	$3472606494161121824, %rax
	movq	%rax, -16(%rbp)
	movl	$171520301, -8(%rbp)
	movb	$0, -4(%rbp)
	leaq	-64(%rbp), %rax
	movl	$59, %edx
	movq	%rax, %rsi
	movl	$1, %edi
	call	write@PLT
	movl	$1, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 11.2.0-16) 11.2.0"
	.section	.note.GNU-stack,"",@progbits
