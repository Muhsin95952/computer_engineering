#	
.text
.globl main
main:
	la $t0, number	# load a number 100 from memory
	lw $t1 ($t0)
	
	li $v0, 4
	la $a0, msg
	syscall
	
	li $v0, 1
	move $a0, $t1
	syscall
	
	li $t2, 10
	add $t1, $t1, $t2	# Add 10 to loaded number
	
	li $v0, 4
	la $a0, msg1
	syscall
	
	li $v0, 1
	move $a0, $t1
	syscall
	
	li $v0, 10
	syscall
	
.data
number: .word 100
msg: .asciiz"loaded number is: "
msg1: .asciiz"\nloaded number after addition is: "