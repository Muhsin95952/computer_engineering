module MUX2x1_tb();
reg S, I0, I1;
wire Out;

MUX2x1 m1(Out, S, I0,I1);

initial begin
S = 0;
I0 = 1; I1 = 1;
#10
S = 1;
I0 = 1; I1 = 1;
end 

initial
$monitor("I0 = %b I1 = %b S = %b Out = %b", I0, I1, S, Out);

endmodule

