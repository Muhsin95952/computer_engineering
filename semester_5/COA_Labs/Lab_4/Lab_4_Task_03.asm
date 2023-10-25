	
.text
.globl main
main:
	la $t1, number
	jr $t1
	
	
number:
li $t3, 8
	li $t2, 9
	add $t4, $t2, $t3
	li $v0, 1
	move $a0, $t4
	syscall
	j end 
	
end:	
	li $v0, 10
	syscall
	
