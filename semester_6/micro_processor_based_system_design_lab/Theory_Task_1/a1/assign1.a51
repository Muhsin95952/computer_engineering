; Define the delay function
delay_10ms:
    ; Initialize a counter
    MOV R0, #100 ; 100 iterations for 1ms delay

delay_loop:
    ; Inner loop for 1ms delay
    MOV R1, #250 ; Adjust this value based on your clock frequency
    DJNZ R1, $ ; Decrement R1 and jump if not zero
    DJNZ R0, delay_loop ; Decrement R0 and repeat if not zero
    RET ; Return from the delay function

; Main program
ORG 0x0000 ; Start address
MAIN:
    CALL delay_10ms ; Call the delay function for 10ms delay
    ; Your LED control code here
    SJMP MAIN ; Repeat indefinitely

; End of program
