.text
.globl main

main:
li $v0, 4
la $a0, limit
syscall

li $v0, 5
syscall
move $t0, $v0	# $t1 is limit of the fibonacci Series

li $t3, 1	# start of for loop i = 1
li $t1, 0	# 1st element
li $t2, 1	# 2nd element

li $v0, 1	# Print 1st number
move $a0, $t1
syscall

li $v0, 4	# print comma b/w two numbers
la $a0, comma
syscall

li $v0, 1	# print 2nd number
move $a0, $t2
syscall

li $v0, 4
la $a0, comma
syscall

again:
add $t1, $t1, $t2	#addition for fibonacci
addi $t3, $t3, 1	# i++

li $v0, 1
move $a0, $t1
syscall

li $v0, 4
la $a0, comma
syscall

move $t4, $t1		# Swaping
move $t1, $t2
move $t2, $t4

# If limitis not equal to "i" continue loop
bne $t3, $t0, again
j exit			# if equal exit the loop

exit:
li $v0, 10
syscall

.data
limit: .asciiz"Enter limit for the Fibonacci Series: "
comma: .asciiz" , "