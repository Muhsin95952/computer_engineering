module m2to1 (out, i1, i2, s);

	output out;
	input i1, i2, s;
	
	wire sbar, o1, o2;
	
	//assign out = !s?i1:i2;
	//assgin out = ~s&i1 | s&i2;
	
	and a2 (o2, s, i2);
	or r1 (out, o1, o2);	
	not n1 (sbar, s);
	and a1 (o1, sbar, i1);
		
endmodule