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
		# Enter AGE
	li $v0, 4
	la $a0, msg
	syscall

	li $v0, 5
	syscall
	move $t1, $v0

	li $t2, 18

	bge $t1, $t2, eligible
	blt $t1, $t2, not_eligible

eligible:
        
        li $v0, 4
	la $a0, msg1
	syscall
	j exit

not_eligible:
        
        li $v0, 4
	la $a0, msg2
	syscall
	j exit

exit:
	li $v0, 10
	syscall

.data

msg: .asciiz"Enter a number:  "
msg1: .asciiz"You are Eligible for CNIC "
msg2: .asciiz"You are NOT Eligible for CNIC "
#msg3: .asciiz"The two number are NOT EQUAL"