module add6 (Sum, Cf, A, B);

	output [5:0] Sum; output Cf;
	input [5:0] A, B;
	
	assign {Cf, Sum} = A + B;
	
endmodule