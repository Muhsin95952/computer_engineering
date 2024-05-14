module upDownCounter(clk, upDw, reset, count);
input clk, reset, upDw;
output [2:0] count;

reg [2:0]count;

always @ (*)
    if
