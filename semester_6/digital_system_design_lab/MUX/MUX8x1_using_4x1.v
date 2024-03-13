module MUX8x1_using_4x1(Out, S0, S1, S2, I);
input [7:0]I;
input S0, S1, S2;
output Out;

wire z1, z2;

MUX4x1 c2(z1, S1, S2, I[3:0]);
MUX4x1 c3(z2, S1, S2, I[7:4]);
MUX2x1 c4(Out, S0, z1 ,z2);

endmodule


