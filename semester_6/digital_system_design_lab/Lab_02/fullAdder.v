module fullAdder(S, C, A, B, Cin);
input A, B, Cin;
output S, C;

wire s1, c1, c2;

halfAdder h1(s1, c1, A, B);
halfAdder h2(S, c2, Cin, s1);
or r1(C, c1, c2);

endmodule
