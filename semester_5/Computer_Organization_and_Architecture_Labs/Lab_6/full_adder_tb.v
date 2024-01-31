module FA_test();
reg A, B, C;
wire sum, cout;
FA a1(A, B, C, sum, cout);
initial
begin
$display("A, B, C, sum, cout");
A = 0;
B = 0;
C = 0;
#10
$display("%b, %b, %b, %b %b", A, B, C, sum, cout);

A = 0;
B = 0;
C = 1;
#10
$display("%b, %b, %b, %b %b", A, B, C, sum, cout);

A = 0;
B = 1;
C = 0;
#10
$display("%b, %b, %b, %b %b", A, B, C, sum, cout);

A = 0;
B = 1;
C = 1;
#10
$display("%b, %b, %b, %b %b", A, B, C, sum, cout);

A = 1;
B = 0;
C = 0;
#10
$display("%b, %b, %b, %b %b", A, B, C, sum, cout);

A = 1;
B = 0;
C = 1;
#10
$display("%b, %b, %b, %b %b", A, B, C, sum, cout);

A = 1;
B = 1;
C = 0;
#10
$display("%b, %b, %b, %b %b", A, B, C, sum, cout);

A = 1;
B = 1;
C = 1;
#10
$display("%b, %b, %b, %b %b", A, B, C, sum, cout);

end
endmodule
