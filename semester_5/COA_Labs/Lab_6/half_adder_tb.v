module half_adder_tb();
reg A, B;
wire S, C;
half_adder a1(A, B, S, C);
initial
begin
$display("A, B, S, C");
A = 0;
B = 0;
#10
$display("%b, %b, %b, %b", A, B, S, C);

A = 0;
B = 1;
#10
$display("%b, %b, %b, %b", A, B, S, C);
A = 1;
B = 0;
#10
$display("%b, %b, %b, %b", A, B, S, C);

A = 1;
B = 1;
#10
$display("%b, %b, %b, %b", A, B, S, C);
end
endmodule
