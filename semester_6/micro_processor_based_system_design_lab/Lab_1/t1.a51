ORG 0x00   ; Set the origin to address 0

MAIN:      ; Main code starts here
    MOV P1, #0xFF  ; Set all pins of P1 as high
    MOV P2, #0xFF  ; Set all pins of P2 as high

    LOOP:
        MOV P1, A   ; Toggle P1
        MOV P2, A   ; Toggle P2
        ACALL DELAY ; Call delay subroutine
        SJMP LOOP   ; Jump back to LOOP

DELAY:     ; Delay subroutine
    MOV R2, #0xFF
DELAY_LOOP:
    DJNZ R2, DELAY_LOOP
    RET
