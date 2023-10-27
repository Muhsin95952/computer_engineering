	
.text
.globl main
main:
	la $t1, number	# loading Address of number
	jr $t1 			# Jumping to that Address
	
number:
	li $t3, 8
	li $t2, 9
	add $t4, $t2, $t3	# Addition
	
	li $v0, 4
	la, $a0, msg
	syscall
	
	li $v0, 1
	move $a0, $t4
	syscall
	j end 
	
end:	
	li $v0, 10
	syscall
	
.data
msg: .asciiz"Addition of the two number is: "