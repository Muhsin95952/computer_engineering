module HA (S, Cy, A, B);

	input A, B;
	output S, Cy;
	
	xor x1 (S, A, B);
	and a1 (Cy, A, B);

endmodule