# A program to load elements of an Array from
# a Data Memory, add 100 to it and then store the 
# result in another array.
.data
print_comma: .asciiz ", " 
array:  .word 100, 101, 102, 103, 104, 105, 106, 107
result: .word 0       # Define a memory location for the result

.text
.globl main

main:
    li $t1, 8     	# Print 8 elements of an array      
    la $t2, array

    la $t6, result
    
again:
    lw $t4, ($t2)	# t4 = memory[$t2]
    
    addi $t5, $t4, 100
    # Store the result back in memory
    sw $t5, ($t6)         # Store the result in memory at 'result'
    
    li $v0, 1                    
    move $a0, $t4         #Print to console      
    syscall 

    addi $t2, $t2, 4  # Next address = current address + 4
    addi $t6, $t6, 4  # Next address = current address + 4

    
    subi $t1, $t1, 1  # $t1 = $t1 - 1
    beq $t1, 0, end
       
    li $v0, 4                    
    la $a0, print_comma           
    syscall                     
    j again 

end:    
    li $v0, 10
    syscall
