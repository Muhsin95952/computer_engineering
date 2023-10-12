#  Write a program which take a limit from user and compute the sum of numbers from 0 
#to the limit ( Use bqe, add, addi, and J (jump)). 
#Below is the C++ language code:
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
		# Enter A number
	li $v0, 4
	la $a0, msg
	syscall

	li $v0, 5
	syscall
	move $t1, $v0

	bgt $t1, $zero, sum
	

sum:
       add $t1, $t1-1
	
	j exit


exit:
	li $v0, 10
	syscall

.data

msg: .asciiz"Enter a number:  "
msg1: .asciiz"You  "
