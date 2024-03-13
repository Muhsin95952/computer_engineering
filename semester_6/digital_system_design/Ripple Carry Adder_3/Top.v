module Top;

	wire [2:0] A, B, Sum;
	wire Cin, Cout;
	
	RCA3 dut (Sum, Cout, A, B, Cin);	
	RCA3_tb tb (Sum, Cout, A, B, Cin);
	
endmodule