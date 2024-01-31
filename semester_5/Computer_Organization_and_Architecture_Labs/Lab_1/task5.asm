
.text
    .globl main

main:
    # Load num1 and num2 from memory
    lw $t0, num1           # Load num1 into $t0
    lw $t1, num2           # Load num2 into $t1

    # Multiply num1 and num2 using MULT
    mult $t0, $t1

	li $v0, 1
	move $a0, $t0
	syscall

    # Extract the low and high bits of the result

    mflo $t2               # $t2 = low bits
    mfhi $t3               # $t3 = high bits

   
    # Exit the program 
    li $v0, 10              
    syscall

.data
    num1:   .word 10        
    num2:   .word 5          
    result: .space 8         

