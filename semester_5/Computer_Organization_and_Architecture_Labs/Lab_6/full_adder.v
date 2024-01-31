module full_adder(A, B, C, sum, cout);

input A, B, C;
output sum, cout;
wire C1, S, C2;
half_adder x3(A, B, S, C1);
half_adder x4(S, C, sum, C2);
or orr(C1, C2, cout);

endmodule

