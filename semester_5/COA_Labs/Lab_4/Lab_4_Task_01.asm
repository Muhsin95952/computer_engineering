#	
.text
.globl main
main:
	la $t0, number
	lw $t1 ($t0)
	
	li $t2, 10
	add $t1, $t1, $t2
	
	li $v0, 1
	move $a0, $t1
	syscall
	
	li $v0, 10
	syscall
	
.data
number: .word 100