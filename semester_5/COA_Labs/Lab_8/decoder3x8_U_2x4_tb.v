module decoder3x8_U_2x4_tb();
reg A;
reg B;
reg e;
wire [7:0]I;

decoder3x8_U_2x4 d1(A, B, e, I);
 initial begin 
$display("A B e I0 I1 I2 I3 I4 I5 I6 I7");
A = 0;
B = 0;
e = 0;
#10 $display("%b %b %b %b %b %b %b %b %b %b %b", A, B, e, I[0], I[1], I[2], I[3], I[4], I[5], I[6], I[7]);

A = 0;
B = 1;
e = 0;
#10 $display("%b %b %b %b %b %b %b %b %b %b %b", A, B, e, I[0], I[1], I[2], I[3], I[4], I[5], I[6], I[7]);

A = 1;
B = 0;
e = 0;
#10 $display("%b %b %b %b %b %b %b %b %b %b %b", A, B, e, I[0], I[1], I[2], I[3], I[4], I[5], I[6], I[7]);

A = 1;
B = 1;
e = 0;
#10 $display("%b %b %b %b %b %b %b %b %b %b %b", A, B, e, I[0], I[1], I[2], I[3], I[4], I[5], I[6], I[7]);

A = 0;
B = 0;
e = 1;
#10 $display("%b %b %b %b %b %b %b %b %b %b %b", A, B, e, I[0], I[1], I[2], I[3], I[4], I[5], I[6], I[7]);

A = 0;
B = 1;
e = 1;
#10 $display("%b %b %b %b %b %b %b %b %b %b %b", A, B, e, I[0], I[1], I[2], I[3], I[4], I[5], I[6], I[7]);

A = 1;
B = 0;
e = 1;
#10 $display("%b %b %b %b %b %b %b %b %b %b %b", A, B, e, I[0], I[1], I[2], I[3], I[4], I[5], I[6], I[7]);

A = 1;
B = 1;
e = 1;
#10 $display("%b %b %b %b %b %b %b %b %b %b %b", A, B, e, I[0], I[1], I[2], I[3], I[4], I[5], I[6], I[7]);

end 
endmodule


