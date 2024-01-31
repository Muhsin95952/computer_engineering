module stm_mux2x1();
reg [1:0 ]I;
reg Sel;
wire Out;
mux2x1 mux(I, Sel, Out);
initial 
begin

#10
I[0] = 1;
I[1] = 0;
Sel = 0;

#10
I[0] = 0;
I[1] = 0;
Sel = 1;
end
initial
$monitor("%d %b %b %b %b", $time, I[1], I[0], Sel, Out);
endmodule