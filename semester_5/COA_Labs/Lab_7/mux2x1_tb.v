module stm_mux2x1();
reg I1, I2;
reg Sel;
wire Out;
mux2x1 mux(I1, I2, Sel, Out);
initial 
begin

#10
I1 = 1;
I2 = 0;
Sel = 0;

#10
I1 = 0;
I2 = 0;
Sel = 1;
end
initial
$monitor("%d %b %b %b %b", $time, I1, I2, Sel, Out);
endmodule