#	 Now toggle the bit find in the previous task if the
#	 bit is 1 set it to 0 if it is 0 then set it to 1. 

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
	xor $t4, $t1, $t0
	li $v0, 1
	move $a0, $t4
	syscall
	j end

not_equal:	
	xor $t4, $t1, $t0
	li $v0, 1
	move $a0, $t4
	syscall
	j end
	
end:
	li $v0, 10
	syscall
		
.data
msg1: .asciiz"Enter a number:  "
msg2: .asciiz"4rth bit of given number is 1"
msg3: .asciiz"4rth bit of the given number is 0"
	
	