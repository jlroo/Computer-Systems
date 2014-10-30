	.file	"hw4.c"
	.text
	.p2align 4,,15
	.globl	loop
	.type	loop, @function
loop:
.LFB11:
	.cfi_startproc
	movl	%esi, %ecx
	movl	$1, %edx
	movl	$-1, %eax
	.p2align 4,,10
	.p2align 3
.L3:
	movl	%edx, %r8d
	sall	%cl, %edx
	andl	%edi, %r8d
	xorl	%r8d, %eax
	testl	%edx, %edx
	jne	.L3
	rep ret
	.cfi_endproc
.LFE11:
	.size	loop, .-loop
	.ident	"GCC: (SUSE Linux) 4.8.1 20130909 [gcc-4_8-branch revision 202388]"
	.section	.note.GNU-stack,"",@progbits
