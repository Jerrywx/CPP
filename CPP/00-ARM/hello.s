	.section	__TEXT,__text,regular,pure_instructions
	.build_version ios, 14, 1	sdk_version 14, 1
	.globl	_test                   ; -- Begin function test
	.p2align	2
_test:                                  ; @test
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48             ; =48
	.cfi_def_cfa_offset 48
	str	x0, [sp, #40]
	str	x1, [sp, #32]
	str	x2, [sp, #24]
	str	x3, [sp, #16]
	ldr	x8, [sp, #40]
	ldr	x9, [sp, #32]
	add	x8, x8, x9
	ldr	x9, [sp, #24]
	add	x8, x8, x9
	ldr	x9, [sp, #16]
	add	x8, x8, x9
	str	x8, [sp, #8]
	ldr	x0, [sp, #8]
	add	sp, sp, #48             ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                   ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48             ; =48
	stp	x29, x30, [sp, #32]     ; 16-byte Folded Spill
	add	x29, sp, #32            ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0
	stur	wzr, [x29, #-4]
	mov	x0, #1
	mov	x1, #2
	mov	x2, #3
	mov	x3, #4
	str	w8, [sp, #12]           ; 4-byte Folded Spill
	bl	_test
	str	x0, [sp, #16]
	ldr	w0, [sp, #12]           ; 4-byte Folded Reload
	ldp	x29, x30, [sp, #32]     ; 16-byte Folded Reload
	add	sp, sp, #48             ; =48
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
