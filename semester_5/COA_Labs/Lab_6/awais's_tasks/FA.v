module full_adder(A, B, C, sum, carry);
input A, B, C;
output sum, carry;
half_adder h1(A, B, c1, s1);
half_adder h2(C, s1, c2, sum);
or h3(carry, c1, c2);

endmodule
 
