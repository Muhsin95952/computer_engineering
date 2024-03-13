module OR_gate(A, B, O);
input A;
input B;
output O;

wire nA;
wire nB;

nand n1(nA, A);
nand n2(nB, B);
nand n3(O, nA, nB);

endmodule

