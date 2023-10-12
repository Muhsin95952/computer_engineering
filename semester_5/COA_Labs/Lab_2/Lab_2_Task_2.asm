#: Check whether a number input by user is negative or equal to zero or greater then zero 
#   using branching ( Use bgt or ble ).
 

.text
.globl main
main:
	li $v0, 4
	la $a0, msg
	syscall

	li $v0, 5
	syscall
	move $t1, $v0


	bgt $t1, $zero, positive
	beq $t1, $zero, zero
	blt $t1, $zero, negative

positive:
        
        li $v0, 4
	la $a0, msg1
	syscall
	j exit

zero:
        
        li $v0, 4
	la $a0, msg2
	syscall
	j exit

negative:
        
        li $v0, 4
	la $a0, msg3
	syscall
	j exit

exit:
	li $v0, 10
	syscall

.data

msg: .asciiz"Enter a number:  "
msg1: .asciiz"The number is Positive"
msg2: .asciiz"The number is Zero"
msg3: .asciiz"The number is Negative"