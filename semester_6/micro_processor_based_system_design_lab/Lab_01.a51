ORG 0x00   

MAIN:      ; Main code starts here
    MOV P1, #0xFF  
    MOV P2, #0xFF  

    LOOP:
        MOV P1, A  
        MOV P2, A  
        ACALL DELAY 
        SJMP LOOP   

DELAY:     
    MOV R2, #0xFF
DELAY_LOOP:
    DJNZ R2, DELAY_LOOP
    RET
