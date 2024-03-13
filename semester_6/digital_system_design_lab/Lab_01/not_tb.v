module not_gate_tb();
reg I;
wire O;

not_gate n1(I, O);

initial begin
I = 1;
#10
$display("I = %b O = %b", I, O);
I = 0;
#10
$display("I = %b O = %b", I, O);
end
endmodule

