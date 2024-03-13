module fullAdder_lvl(Sum, Cout, A, B, C);
input A, B, C;
output Sum, Cout;

wire s1, c1, c2, c3;

assign s1 = A ^ B;
assign Sum = s1 ^ C;


assign c1 = s1 & C;
assign c2 = A & B;
assign Cout = c1 | c2;

endmodule