module RCA3_tb (Sum, Cout, A, B, Cin);

	input [2:0] Sum; input Cout;
	output [2:0] A, B; output Cin;
	
	reg [2:0] A, B; reg Cin;
	
	initial begin
	A=3'b101; B=3'b001; Cin=1'b0;
	#7 A=3'b101; B=3'b110; Cin=1'b0;
	#10 A=3'b110; B=3'b001; Cin=1'b0;
	end
	
	initial
	$monitor ("%d, A=%b, B=%b, Sum=%b, Cout=%b", $time, A, B, Sum, Cout);

endmodule