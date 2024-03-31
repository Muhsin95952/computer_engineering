module T_FF (q, clock, reset);

	output q;
	input clock, reset;
	wire d;
	
	
	not n1 (d, q); 
	// not is a Verilog-provided primitive. Case sensitive.
		
	D_FF d0 (q, d, clock, reset);
	
endmodule