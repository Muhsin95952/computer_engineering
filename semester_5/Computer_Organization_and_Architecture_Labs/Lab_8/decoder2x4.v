module decoder2x4(A, B, e, I);
input A;
input B;
input e;
output [3:0]I;
wire nA;
wire nB;

not n1(nA, A);
not n2(nB, B);

and a1(I[0], nA, nB, e);
and a2(I[1], nA, B, e);
and a3(I[2], A, nB, e);
and a4(I[3], A, B, e);

endmodule

