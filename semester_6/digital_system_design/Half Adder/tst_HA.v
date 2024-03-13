module tst_HA (S, Cy, A, B);

	input S, Cy;
	output A, B;
	
	reg A, B;

	initial begin
	#10 A=0; B=0;
	#10 A=0; B=1;
	#10 A=1; B=0;
	#10 A=1; B=1;
	end
	
	initial
	$monitor ("%d, A=%b, B=%b, S=%b, Cy=%b",$time, A, B, S, Cy);
	
endmodule