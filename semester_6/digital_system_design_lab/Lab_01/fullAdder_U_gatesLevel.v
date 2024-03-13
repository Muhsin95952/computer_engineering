module fullAdder_using_gate_level(Sum, Cout, A, B, C);
input A, B, C;
output Sum, Cout;
wire s1, c1, c2, c3;

xor x1(s1, A, B);
xor x2(Sum, s1, C);

xor x3(c1, A, B);
and x4(c2, c1, C);
and x5(c3, A, B);
or x6(Cout, c2, c3);

endmodule


