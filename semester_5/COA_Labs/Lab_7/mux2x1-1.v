module mux2x1(I0, I1, Sel, Out);
input I0, I1;
input Sel;
output Out;
reg Out;
	always @(I0, I1, Sel)
	case(Sel)
		1'b0:Out=I0;
		1'b1:Out=I1;
	endcase
endmodule
