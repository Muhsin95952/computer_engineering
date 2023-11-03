
.text
.globl main
main:
	li $v0 4
	la $a0 number1
	syscall
	
	li $v0 5
	syscall
	move $t0 $v0
		
	li $v0 4
	la $a0 number2
	syscall
	
	li $v0 5
	syscall
	move $t1 $v0
	
	li $t4 1
	
	move $t3 $t0

checkPrime:
	addi $t4, $t4, 1
	beq $t4, $t3, isPrimeNumber
	div $t3, $t4
	mfhi $t5
	beq $t5, $zero, isNotPrimeNumber
	j checkPrime

isPrimeNumber:
	li $v0 1
	move $a0 $t3
	syscall
	
	li $v0 4
	la $a0 message2
	syscall
	
	j iterate
	
isNotPrimeNumber:
#	li $v0 1
#	move $a0 $t3
#	syscall
	
#	li $v0 4
#	la $a0 message3
#	syscall
	
	j iterate
	
iterate:
	addi $t3, $t3, 1
	li $t4 1
	ble $t3, $t1, checkPrime
	j exit

exit:
	li $v0 10
	syscall
	
.data
	number1: .asciiz "Enter the first number: "
	number2: .asciiz "Enter the second number: "
	message2: .asciiz " , "
	