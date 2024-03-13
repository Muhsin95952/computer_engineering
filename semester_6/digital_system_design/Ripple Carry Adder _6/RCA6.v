module RCA6 (Sum, Cf, A, B);

	output [5:0] Sum; output Cf;
	input [5:0] A, B;
	
	wire c; 

	RCA3 inst0 (Sum[2:0], c, A[2:0], B[2:0], 1'b0);
	RCA3 inst1 (Sum[5:3], Cf, A[5:3], B[5:3], c);
	
endmodule