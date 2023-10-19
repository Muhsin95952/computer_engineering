#	Write a program in assembly language to check a number entered by user is even or odd. 


.text
.globl main
main:
	li $v0, 4
	la $a0, msg1
	syscall

	li $v0, 5
	syscall
	move $t0, $v0

	li $t1, 2
	li $t3, 0
	
	div $t0, $t1
	mfhi $t2

	beq $t2, $t3, EVEN_number
	bne $t2, $t3, ODD_number

EVEN_number:
	li $v0, 4
	la $a0, msg2
	syscall
	j end

ODD_number:
	li $v0, 4
	la $a0, msg3
	syscall
	j end

end: 
	li $v0, 10
	syscall

.data
msg1: .asciiz"Enter a number:  "
msg2: .asciiz"The number you have Entered is EVEN"
msg3: .asciiz"The number you have Entered is ODD"