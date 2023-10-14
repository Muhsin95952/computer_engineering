#  : Write the assembly of the below C++ code.
#	Int age;
#	Cout<<”enter your age”<<endl;
#	Cin>>age;
#	If(age > 18)
#	{
#		Cout<<”you can apply for CNIC”<<endl;
#	}
#		Else
#	{
#		Cout<<”you cannot apply for CNIC”<<endl;
#	}

.text
.globl main
main:
			# To show a msg "Enter AGE"
	li $v0, 4
	la $a0, msg
	syscall

	li $v0, 5	# Store AGE in t1 from user
	syscall
	move $t1, $v0

	li $t2, 18	# store 18 in t2 register

	bge $t1, $t2, eligible		# if AGE >= 18
	blt $t1, $t2, not_eligible	# if AGE < 18

eligible:		# show msg if eligible
        li $v0, 4
	la $a0, msg1
	syscall
	j exit

not_eligible:		# show msg if NOT eligible
        li $v0, 4
	la $a0, msg2
	syscall
	j exit

exit:			# Exit the program
	li $v0, 10
	syscall

.data
msg: .asciiz"Enter a number:  "
msg1: .asciiz"You are Eligible for CNIC "
msg2: .asciiz"You are NOT Eligible for CNIC "
#msg3: .asciiz"The two number are NOT EQUAL"