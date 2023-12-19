module decoder2x4_tb();
reg A;
reg B;
reg e;
wire [3:0]I;

decoder2x4 d1(A, B, e, I);

initial begin
$display("A  B  e  I0  I1  I2  I3 ");
A = 0;
B = 0;
e = 0;
#10 $display("%b, %b, %b, %b, %b, %b, %b ", A, B, e, I[0], I[1], I[2], I[3]);

A = 0;
B = 0;
e = 1;
#10 $display("%b, %b, %b, %b, %b, %b, %b ", A, B, e, I[0], I[1], I[2], I[3]);

A = 0;
B = 1;
e = 1;
#10 $display("%b, %b, %b, %b, %b, %b, %b ", A, B, e, I[0], I[1], I[2], I[3]);

A = 1;
B = 0;
e = 1;
#10 $display("%b, %b, %b, %b, %b, %b, %b ", A, B, e, I[0], I[1], I[2], I[3]);

A = 1;
B = 1;
e = 1;
#10 $display("%b, %b, %b, %b, %b, %b, %b ", A, B, e, I[0], I[1], I[2], I[3]);

end
endmodule
