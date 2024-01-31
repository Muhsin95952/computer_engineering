.text
.globl main
main:
	li $v0, 4	# show msg that "Enter 1st number"
	la $a0, msg1
	syscall

	li $v0, 5
	syscall
	move $t0, $v0

	li $v0, 4	# show msg that "Enter a number for operation (Add=1, Subt=2, Multi=3, Divid=4)"
	la $a0, msg2
	syscall

	li $v0, 5
	syscall
	move $t1, $v0

	li $v0, 4	# show msg that "Enter 2nd number"
	la $a0, msg3
	syscall

	li $v0, 5
	syscall
	move $t2, $v0

	li $t3, 1
	li $t4, 2
	li $t5, 3
	li $t6, 4

	beq $t1, $t3, addition
	beq $t1, $t4, subtraction
	beq $t1, $t5, multiplication
	beq $t1, $t6, division

addition:
	add $t7, $t0, $t2
	li $v0, 1
	move $a0, $t7
	syscall
	j exit

subtraction:
	sub $t7, $t0, $t2
	li $v0, 1
	move $a0, $t7
	syscall
	j exit

multiplication:
	mul $t7, $t0, $t2
	li $v0, 1
	move $a0, $t7
	syscall
	j exit

division:
	div $t7, $t0, $t2
	
	li $v0, 1
	move $a0, $t7
	syscall
	j exit

exit:
	li $v0, 10
	syscall

.data
msg1: .asciiz"Enter 1st number: "
msg2: .asciiz"Enter a number for operation (Add=1, Subt=2, Multi=3, Divid=4): "
msg3: .asciiz"Enter 2nd Number: "