module andgate_tb();
reg I1;
reg I2;
wire O;
andgate and_tb(I1, I2, O);
initial begin
I1 = 0;
I2 = 0;
#10
$display("I1 = %b I2 = %b O = %b", I1,I2,O);
I1 = 0;
I2 = 1;
#10
$display("I1 = %b I2 = %b O = %b", I1,I2,O);
I1 = 1;
I2 = 0;
#10
$display("I1 = %b I2 = %b O = %b", I1,I2,O);
I1 = 1;
I2 = 1;
#10
$display("I1 = %b I2 = %b O = %b", I1,I2,O);
end 
endmodule
