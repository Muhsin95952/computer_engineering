.text
.globl main
main:
	li $v0, 4
	la $a0, msg
	syscall

	li $v0, 5
	syscall
	move $t0, $v0

	li $v0, 4
	la $a0, msg2
	syscall

	li $v0, 5
	syscall
	move $t1, $v0

	mul $t2, $t0, $t1

	li $v0, 1
	move $a0, $t2 
	syscall
	
	li $v0, 10
	syscall



.data

msg: .asciiz"Enter a number:  "
msg2: .asciiz"Enter another number:  "