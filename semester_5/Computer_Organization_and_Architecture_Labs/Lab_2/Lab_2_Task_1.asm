#: Enter a number 5432 from user and then display the 
# last digit in the console.(hint: use mfhi ).

.text
.globl main
main:
	li $v0, 4	# show msg "Enter a number"
	la $a0, msg
	syscall

	li $v0, 5
	syscall
	move $t0, $v0	# store number from user in t0

	li $t1, 10	# store 10 in t1 register

	div $t0, $t1	# Divide number from user by 10

	mfhi $t2 	# store remainder from hi in t2

	li $v0, 1	# show result on consol
	move $a0, $t2
	syscall
	
	li $v0, 10	# Exit program
	syscall

.data
msg: .asciiz"Enter a number:  "