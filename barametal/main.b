	.cpu cortex-m3
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"main.c"
	.text
	.align	1
	.global	sys_tictime
	.arch armv7-m
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	sys_tictime, %function
sys_tictime:
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	push	{r7}
	sub	sp, sp, #12
	add	r7, sp, #0
	str	r0, [r7, #4]
	ldr	r2, .L2
	ldr	r3, [r7, #4]
	str	r3, [r2]
	ldr	r3, .L2+4
	ldr	r3, [r3]
	ldr	r2, .L2+4
	orr	r3, r3, #3
	str	r3, [r2]
	nop
	adds	r7, r7, #12
	mov	sp, r7
	@ sp needed
	pop	{r7}
	bx	lr
.L3:
	.align	2
.L2:
	.word	-536813548
	.word	-536813552
	.size	sys_tictime, .-sys_tictime
	.align	1
	.global	SysTick_Handler
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SysTick_Handler, %function
SysTick_Handler:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{r7, lr}
	add	r7, sp, #0
	movs	r1, #13
	movs	r0, #2
	bl	GPIO_u8TogPin
	nop
	pop	{r7, pc}
	.size	SysTick_Handler, .-SysTick_Handler
	.section	.rodata
	.align	2
.LC0:
	.byte	2
	.byte	13
	.byte	1
	.text
	.align	1
	.global	main
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{r7, lr}
	sub	sp, sp, #8
	add	r7, sp, #0
	movs	r3, #0
	str	r3, [r7, #4]
	.syntax unified
@ 57 "main.c" 1
	MSR MSP,R3
@ 0 "" 2
	.thumb
	.syntax unified
	ldr	r2, .L7
	mov	r3, r7
	ldr	r2, [r2]
	mov	r1, r2	@ movhi
	strh	r1, [r3]	@ movhi
	adds	r3, r3, #2
	lsrs	r2, r2, #16
	strb	r2, [r3]
	ldr	r0, .L7+4
	bl	sys_tictime
	movs	r0, #4
	bl	RCC_u8EnPripheral
	mov	r3, r7
	mov	r0, r3
	bl	GPIO_voidInit
.L6:
	b	.L6
.L8:
	.align	2
.L7:
	.word	.LC0
	.word	300000
	.size	main, .-main
	.ident	"GCC: (GNU Arm Embedded Toolchain 10-2020-q4-major) 10.2.1 20201103 (release)"
