module rippleCarryAdder_tb();
reg [3:0] A, B;
reg Cin;
wire [3:0] S;
wire C;

rippleCarryAdder add1(S, C, A, B, Cin);

initial begin
A = 4'b0000; B = 4'b0001; Cin = 0;
#10
A = 4'b0001; B = 4'b0001; Cin = 0;
#10 
A = 4'b0010; B = 4'b0001; Cin = 0;
#10
A = 4'b1001; B = 4'b1001; Cin = 1;
end

initial
$monitor("A B Cin C S", A, B, Cin, C, S);
endmodule
