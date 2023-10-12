#  Check using branch whether the number input by user are equal or not ( Use beq ).

.text
.globl main
main:
		# Enter first number
	li $v0, 4
	la $a0, msg
	syscall

	li $v0, 5
	syscall
	move $t1, $v0

		# Enter 2nd number
	li $v0, 4
	la $a0, msg
	syscall

	li $v0, 5
	syscall
	move $t2, $v0


	beq $t1, $t2, equal
	bne $t1, $t2, not_equal

equal:
        
        li $v0, 4
	la $a0, msg2
	syscall
	j exit

not_equal:
        
        li $v0, 4
	la $a0, msg3
	syscall
	j exit

exit:
	li $v0, 10
	syscall

.data

msg: .asciiz"Enter a number:  "
msg1: .asciiz"Enter another number: "
msg2: .asciiz"The two number are EQUAL"
msg3: .asciiz"The two number are NOT EQUAL"