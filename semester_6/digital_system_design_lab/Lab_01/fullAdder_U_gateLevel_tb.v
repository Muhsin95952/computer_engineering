module fullAdder_using_gate_level_tb();
reg A, B, C;
wire Sum, Cout;

fullAdder_using_gate_level S1(Sum, Cout, A, B, C);

initial begin
A = 0; B  = 0; C = 0;
#10 A = 0; B  = 0; C = 1;
#10 A = 0; B  = 1; C = 0;
#10 A = 0; B  = 1; C = 1;
#10 A = 1; B  = 0; C = 0;
#10 A = 1; B  = 0; C = 1;
#10 A = 1; B  = 1; C = 0;
#10 A = 1; B  = 1; C = 1;
end
initial
$monitor("A = %b, B = %b, C = %b, Sum = %b, Cout = %b", A, B, C, Sum, Cout);

endmodule

