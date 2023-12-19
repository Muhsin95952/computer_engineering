module mux2x1(I, Sel, Out);
input [1:0] I;
input Sel;
output Out;
reg Out;
	always @(I, Sel)
	case(Sel)
		1'b0:Out=I[0];
		1'b1:Out=I[1];
	endcase
endmodule
