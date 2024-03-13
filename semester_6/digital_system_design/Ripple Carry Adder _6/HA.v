module HA (S, Cy, A, B);

	input A, B;
	output S, Cy;
	
	//xor x1 (S, A, B);
	//and a1 (Cy, A, B);
	assign {Cy, S} = A+B;
	//assign S = A^B;
	//assign Cy = A&B;

endmodule