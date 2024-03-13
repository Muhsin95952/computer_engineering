module FA (Sum, Cout, A, B, Cin);

	input A, B, Cin;
	output Sum, Cout;
	
	wire c0, c1, c2;
	
	HA ha0 (.A(A), .B(B), .S(c0), .Cy(c1));
	HA ha1 (Sum, c2, c0, Cin); 
	or o1 (Cout, c1, c2);
	
endmodule