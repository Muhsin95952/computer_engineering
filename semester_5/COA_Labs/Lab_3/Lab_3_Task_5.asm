#	Show that shifting left of an even number by 1 position is a 
#	multiplication by 2 and shifting right of an even number by 
#	1 position is a division by 2. (Hint: Use sll and srl).  


.text
.globl main
main:
	li $v0, 4
	la $a0, msg1
	syscall

	li $v0, 5
	syscall
	move $t0, $v0
	
	sll $t1, $t0, 1

	
	li $v0, 4
	la $a0, msg2
	syscall
	li $v0, 1
	move $a0, $t1
	syscall
	
	srl $t2, $t0, 1
	
	li $v0, 4
	la $a0, msg3
	syscall
	li $v0, 1
	move $a0, $t2
	syscall
	
	
	li $v0, 10
	syscall
	
.data
msg1: .asciiz"Enter a number: "
msg3: .asciiz"\nRight Shifting:  "
msg2: .asciiz"Left Shifting: "