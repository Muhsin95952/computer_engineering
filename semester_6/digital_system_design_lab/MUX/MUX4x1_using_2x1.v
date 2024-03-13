module MUX4x1_using_2x1(Out, S0, S1, I);
input [3:0]I;
input S0, S1;
output Out;

wire x1, x2;

MUX2x1 m2(x1, S1, I[0] ,I[1]);
MUX2x1 m3(x2, S1, I[2] ,I[3]);
MUX2x1 m4(Out, S0, x1 ,x2);

endmodule

