module stimulus (q, clock, reset);

	input [3:0] q;
	output clock, reset;
	
	reg clock, reset;
	
	always
		#5 clock = ~clock; //toggle clock every 5 time units

	initial
	begin
		clock = 1'b0; //set clk to 0		
		reset = 1'b1; //high reset clears the counter
		#15 reset = 1'b0; //low reset causes the counter to count
		#500 $finish; //terminate the simulation
	end

	// monitor the outputs
	initial
		$monitor($time, ", reset = %b, Output q = %d", reset, q);

endmodule