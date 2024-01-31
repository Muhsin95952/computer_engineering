module four_bit(a0, b0, a1, b1, a2, b2, a3, b3, cin, s0, s1, s2, s3, c3);
input a0, b0, a1, b1, a2, b2, a3, b3, cin;
output s0, s1, s2, s3, c3;

FA g1(a0, b0, cin, s0, c0);
FA g2(a1, b1, c0, s1, c1);
FA g3(a2, b2, c1, s2, c2);
FA g4(a3, b3, c2, s3, c3);

endmodule

