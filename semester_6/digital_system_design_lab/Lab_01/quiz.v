module quiz(A,B,C,D,O);
input A,B,C,D;
output O;
wire nA, nB;
and a1(nA,A,B);
or o1(nB,C,D);
nand n1(O,nA,nB);

endmodule
