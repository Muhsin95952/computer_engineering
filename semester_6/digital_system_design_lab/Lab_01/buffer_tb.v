module buffer_tb();
reg I;
wire O;

buffer b1(I, O);

initial begin
I = 1;
#10
$display("I = %b O = %b", I, O);
I = 0;
#10
$display("I = %b O = %b", I, O);
end
endmodule

