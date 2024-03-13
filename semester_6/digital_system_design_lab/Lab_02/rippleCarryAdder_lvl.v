module rippleCarryAdder_lvl(S, C, A, B, Cin);
input [3:0] A, B;
input Cin;

output [3:0] S;
output C;

wire c1, c2, c3;

fullAdder_lvl f1(S[0], c1, A[0], B[0], Cin);
fullAdder_lvl f2(S[1], c2, A[1], B[1], c1);
fullAdder_lvl f3(S[2], c3, A[2], B[2], c2);
fullAdder_lvl f4(S[3], C, A[3], B[3], c3);

endmodule
