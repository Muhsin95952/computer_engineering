.text
.globl main
main:
     la $a0, msg
     li $v0, 4
     syscall
     
     li $v0, 5
     syscall
     
     move $t0, $v0         
     
     li $t3,2
     li $t4,0
     li $t5,0
      
     li $t1, 2             
     
     beq $t0, 1, not_valid   
     blt $t0, 1, not_valid    
     beq $t0, 2, not_valid   
     
	 li $t6, 1
     sub $t0, $t0, $t6
     
again:
    beq $t1, $t3, PrimeNumber
    div $t3, $t1
    mfhi $t2
    beqz $t2, composit
    addi $t1, $t1,1
    
    j again
    
print:
     la $a0, firstLargest
     li $v0, 4
     syscall
  
  
     move $a0, $t4
     li $v0, 1
     syscall 
     
     la $a0, secondLargest
     li $v0, 4
     syscall
     
     move $a0, $t5
     li $v0, 1
     syscall
  
     j exit    

PrimeNumber: 
     li $t1,2
     move $t5, $t4       
     move $t4,$t3        
     addi $t3,$t3,1
     ble $t3,$t0, again
     j print
 
not_valid:
     la $a0, composite
     li $v0,4
     syscall
     j exit 
    
composit:
     li $t1,2
     addi $t3, $t3,1
     ble $t3, $t0, agian
     j print
     
exit:
     li $v0,10
     syscall
     
.data
msg: .asciiz "Enter Number: "
composite: .asciiz "Number you have entered is not valid..."
newLine: .asciiz "\n"
firstLargest: .asciiz "1st Largest Prime is "
secondLargest: .asciiz "\n2nd Largest Prime is "
     
