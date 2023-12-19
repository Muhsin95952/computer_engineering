module decoder4x16_U_3x8_tb();
reg A;
reg B; 
reg C;
reg e;
wire [15:0]I;

decoder4x16_U_3x8 d1(A, B, C, e, I);

initial begin
$display("A B C e I0 I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11 I12 I13 I14 I15");

e = 0;
A = 0;
B = 0;
C = 0;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 0;
A = 0;
B = 0;
C = 1;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 0;
A = 0;
B = 1;
C = 0;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 0;
A = 0;
B = 1;
C = 1;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 0;
A = 1;
B = 0;
C = 0;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 0;
A = 1;
B = 0;
C = 1;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 0;
A = 1;
B = 1;
C = 0;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 0;
A = 1;
B = 1;
C = 1;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 1;
A = 0;
B = 0;
C = 0;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 1;
A = 0;
B = 0;
C = 1;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 1;
A = 0;
B = 1;
C = 0;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 1;
A = 0;
B = 1;
C = 1;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 1;
A = 1;
B = 0;
C = 0;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 1;
A = 1;
B = 0;
C = 1;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 1;
A = 1;
B = 1;
C = 0;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);

e = 1;
A = 1;
B = 1;
C = 1;
#10 
$display("%b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b %b", A, B, C, e, I[0], I[1], I[2], I[3], I[4],
 I[5], I[6], I[7], I[8], I[9], I[10], I[11], I[12], I[13], I[14], I[15]);


end 
endmodule


