module decoder4x16_U_3x8(A, B, C, e, I);
input A;
input B;
input C;
input e;
output [0:15]I;
wire ne;

not n1(ne, e);

decoder3x8 d1(A, B, C, e, I[0:7]);
decoder3x8 d2(A, B, C, ne, I[8:15]);

endmodule
