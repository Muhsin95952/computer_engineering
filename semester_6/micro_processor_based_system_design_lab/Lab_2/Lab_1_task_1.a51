ORG 00H
	MOV P0,#01H
	ACALL DELAY
	MOV P0,#02H
	ACALL DELAY
	DELAY:
		MOV R0,#10
		LOOP:
			DJNZ R0,LOOP
			MOV R1,#5
			DJNZ R1,DELAY
	RET
END
		