module mux4x1(I, Sel, Out);
input [3:0] I;
input [1:0] Sel;
output Out;
wire [1:0] s1, s2;
wire w1, w2;

	mux2x1 m1(I[0],I[1], Sel[0], w1);
	mux2x1 m2(I[2], I[3], Sel[0], w2);
	mux2x1 m3(w1, w2, Sel[1], Out);

endmodule

