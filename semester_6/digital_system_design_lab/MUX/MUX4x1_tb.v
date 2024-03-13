module MUX4x1_tb();
reg S0, S1;
reg [3:0]I;
wire Out;

MUX4x1 m2(Out, S0, S1, I);

initial begin
S0 = 0; S1 = 0;
I[0] = 0; I[1] = 1; I[2] = 1; I[3] = 1;
#10

S0 = 0; S1 = 1;
I[0] = 1; I[1] = 1; I[2] = 1; I[3] = 1;
#10

S0 = 1; S1 = 0;
I[0] = 1; I[1] = 1; I[2] = 1; I[3] = 1;
#10

S0 = 1; S1 = 1;
I[0] = 1; I[1] = 1; I[2] = 1; I[3] = 0;
end

initial
$monitor("S0 = %b S1 = %b I0 = %b I1 = %b I2 = %b I3 = %b Out = %b", S0, S1, I[0], I[1], I[2], I[3], Out);

endmodule

