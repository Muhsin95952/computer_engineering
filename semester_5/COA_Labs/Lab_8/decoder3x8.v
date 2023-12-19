module decoder3x8(A, B, C, e, I);
input A;
input B;
input C;
input e;
output [7:0]I;
wire nA;
wire nB;
wire nC;

not n1(nA, A);
not n2(nB, B);
not n3(nC, C);

and a1(I[0], nA, nB, nC, e);
and a2(I[1], nA, nB, C, e);
and a3(I[2], nA, B, nC, e);
and a4(I[3], nA, B, C, e);
and a5(I[4], A, nB, nC, e);
and a6(I[5], A, nB, C, e);
and a7(I[6], A, B, nC, e);
and a8(I[7], A, B, C, e);


endmodule

