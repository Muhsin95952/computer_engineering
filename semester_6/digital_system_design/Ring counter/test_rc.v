module test_rc (CLK, CLR, COUNT);

	output CLK, CLR;
	output [7:0] COUNT;
	
	reg CLK;
	reg CLR;
	
	always
		#5 CLK = ~CLK; //toggle clk every 5 time units

	initial
	begin
		CLK = 1'b0; //set clk to 0		
		CLR = 1'b1;
		#12
		CLR = 1'b0;
		#200 $finish; //terminate the simulation
	end

	initial
		$monitor($time, ": CLR = %b, COUNT = %b", CLR, COUNT);

endmodule