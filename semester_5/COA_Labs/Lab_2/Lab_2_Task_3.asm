#  Check using branch whether the number input by user 
#  are equal or not ( Use beq ).

.text
.globl main
main:
		# Show msg "Enter first number"
	li $v0, 4
	la $a0, msg
	syscall

	li $v0, 5	# store number from user in t1 
	syscall
	move $t1, $v0
		# Show msg "Enter 2nd number"
	li $v0, 4
	la $a0, msg
	syscall

	li $v0, 5	# store number from user in t2
	syscall
	move $t2, $v0

	beq $t1, $t2, equal 		# If t1 == t2
	bne $t1, $t2, not_equal		# If t1 != t2

equal:
        li $v0, 4	# show msg if equal
	la $a0, msg2
	syscall
	j exit
not_equal:
        li $v0, 4	# show msg if NOT equal
	la $a0, msg3
	syscall
	j exit
exit:
	li $v0, 10	#Exit from program
	syscall

.data
msg: .asciiz"Enter a number:  "
msg1: .asciiz"Enter another number: "
msg2: .asciiz"The two number are EQUAL"
msg3: .asciiz"The two number are NOT EQUAL"