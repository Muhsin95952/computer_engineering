module RCA3 (Sum, Cout, A, B, Cin);

	input [2:0] A, B;
	input Cin;
	output [2:0] Sum;
	output Cout;

	wire c0, c1;

	FA fa0 (Sum[0], c0, A[0], B[0], Cin);
	FA fa1 (Sum[1], c1, A[1], B[1], c0);
	FA fa2 (Sum[2], Cout, A[2], B[2], c1);
	
endmodule