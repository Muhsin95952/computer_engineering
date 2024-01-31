#	Write a program that’s show the bit position of a number 
#	is 0 or 1. (Hint if number is 5  it is represented by 0101
#	show the 4th bit position is 0, similarly if the user enters 
# 9 then the binary equivalent is 1001. In this case the 4th bit position is 1). 


.text
.globl main
main:
	li $v0, 4
	la $a0, msg1
	syscall
	
	li $v0, 5
	syscall
	move $t0, $v0
	
	li $t1, 8
	li $t3, 1
	
	and $t2, $t1, $t0
	beq $t2, $t3, equal
	beq $t2, $zero, not_equal
	
equal:	
	li $v0, 4
	la $a0, msg2
	syscall
	j end

not_equal:	
	li $v0, 4
	la $a0, msg3
	syscall
	j end
	
end:
	li $v0, 10
	syscall
		
.data
msg1: .asciiz"Enter a number:  "
msg2: .asciiz"4rth bit of given number is 1"
msg3: .asciiz"4rth bit of the given number is 0"
	
	