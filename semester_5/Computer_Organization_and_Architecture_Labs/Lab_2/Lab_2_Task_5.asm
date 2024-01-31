# Write a program which take a limit from user and compute the sum of numbers from 0 
# to the limit ( Use bqe, add, addi, and J (jump)). 
# Below is the C++ language code:
#	Int sum;
#	Cout<<”Enter a number”<<endl;
#	Cin>>limit; 
#	 for (int i = 1; i <= limit; ++i) {
#	 	sum += i;
#	 }
#	 Cout<<”sum of numbers from 1 to <<limit<<”is”<<sum<<endl

.text
.globl main
main:
			# To show a msg "Enter A number"
	li $v0, 4
	la $a0, msg
	syscall

	li $v0, 5	# storing number from user
	syscall
	move $t0, $v0

			# if number is greater than 0 goto "sum"
	bgt $t1, $zero, sum
	
	li $t1, 1       # store 1 in t1 register
	li $t4, 2	# store 2 in t4 register
	
sum:			# by using formula n(n + 1) / 2
       add $t2, $t1, $t0
	mul $t3, $t2, $t0
	div $t3, $t4

	mflo $t5	# store quotuent in t5

	li $v0, 1	# Displaying result
	move $a0, $t5
	syscall
	j exit

exit:			# end the program
	li $v0, 10
	syscall

.data

msg: .asciiz"Enter a number:  "