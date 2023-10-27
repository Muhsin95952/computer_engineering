#	
.text
.globl main
main:
	la $t0, number	# load a number 100 from memory
	lw $t1 ($t0)
	
	li $v0, 4
	la, $a0, msg
	syscall
	
	li $v0, 1
	move $a0, $t1
	syscall
	
	sll $t1, $t1, 1		# Shifting lift 1
	
	li $v0, 4
	la, $a0, msg1
	syscall
	
	li $v0, 1
	move $a0, $t1
	syscall
	
	li $v0, 10
	syscall
	
.data
number: .word 100
msg: .asciiz"Initial number: "
msg1: .asciiz"\nDoubled number: "





