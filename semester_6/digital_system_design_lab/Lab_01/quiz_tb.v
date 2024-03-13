module quiz_tb();
reg A,B,C,D;
wire O;

quiz circut(A,B,C,D,O);
initial begin
A=0;
B=0;
C=0;
D=0;
#10 $display("A = %b B = %b C = %b D = %b O = %b ",A, B, C, D, O);
A=1;
B=1;
C=1;
D=1;
#10 $display("A = %b B = %b C = %b D = %b O = %b ",A, B, C, D, O);
A=0;
B=0;
C=1;
D=1;
#10 $display("A = %b B = %b C = %b D = %b O = %b ",A, B, C, D, O);
A=1;
B=1;
C=0;
D=0;
#10 $display("A = %b B = %b C = %b D = %b O = %b ",A, B, C, D, O);
end
endmodule

