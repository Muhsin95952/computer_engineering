module T_FF (q, T, clock, reset);

	output q;
	input T, clock, reset;
	wire d;
	
	
	xor n1 (d, T, q); 
	// xor is a Verilog-provided primitive. Case sensitive.
		
	D_FF d0 (q, d, clock, reset);
	
endmodule