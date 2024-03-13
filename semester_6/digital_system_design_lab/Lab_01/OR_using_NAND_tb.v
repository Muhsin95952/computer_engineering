module OR_gate_tb();
reg A, B;
wire O;

OR_gate orr(A, B, O);

initial begin
A = 0;
B = 0;
#10
$display("A = %b B = %b O = %b", A, B, O);
A = 0;
B = 1;
#10
$display("A = %b B = %b O = %b", A, B, O);
A = 1;
B = 0;
#10
$display("A = %b B = %b O = %b", A, B, O);
A = 1;
B = 1;
#10
$display("A = %b B = %b O = %b", A, B, O);

end
endmodule
