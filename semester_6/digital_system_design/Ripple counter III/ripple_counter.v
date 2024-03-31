module ripple_counter (q, T, clock, reset);

	output [3:0] q; 
	input T, clock, reset;

	T_FF tff0 (q[0], T, clock, reset);
	T_FF tff1 (q[1], T, ~q[0], reset);
	T_FF tff2 (q[2], T, ~q[1], reset);
	T_FF tff3 (q[3], T, ~q[2], reset);
	
endmodule