module halfAdder(S, C, A, B);
input A, B;
output S, C;

sum s1(S, A, B);
carry c1(C, A, B);

endmodule
