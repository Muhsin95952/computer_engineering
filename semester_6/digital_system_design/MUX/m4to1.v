module m4to1 (out, I, s);

	output out;
	input [3:0] I;
	input [1:0] s;
	
	wire o1, o2;
	
	m2to1 m0 (o1, I[0], I[1], s[0]);
	m2to1 m1 (o2, I[2], I[3], s[0]);
	m2to1 m2 (out, o1, o2, s[1]);

endmodule