#: Enter a number 5432 from user and then display the last digit in the console.
# (hint: use mfhi ).

.text
.globl main
main:
	li $v0, 4
	la $a0, msg
	syscall

	li $v0, 5
	syscall
	move $t0, $v0

	li $t1, 10

	div $t0, $t1

	mfhi $t2

	li $v0, 1
	move $a0, $t2
	syscall
	
	li $v0, 10
	syscall



.data

msg: .asciiz"Enter a number:  "