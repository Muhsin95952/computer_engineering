.text
.globl main

main:
	li $v0, 4
	la $a0, number
	syscall
	
	li $v0, 5
	syscall
	move $t0, $v0
	
	li $t5, 1
	beq $t0, $t5, comp
	
	li $t5, 2
	beq $t0, $t6, comp
	
	li $t1, 2			# start of for loop i = 1
	div $t4, $t0, $t1   # End of the loop
	
again:
	div $t0, $t1	
	mfhi $t3
	
	beq $t3, $zero, comp
	
	addi $t1, $t1, 1	# i++
	# If limitis not equal to "i" continue loop
	ble $t1, $t4, again	

prime:
	li $v0, 4
	la $a0, Prime
	syscall
	
	j exit
		
comp:	
	li $v0, 4
	la $a0, Composite
	syscall
	
	j exit
	
exit:
	li $v0, 10
	syscall
	
.data
number: .asciiz"Enter a number if it is Prime or not: "
Prime: .asciiz"The given number is Prime. "
Composite: .asciiz"The given number is Composite. "