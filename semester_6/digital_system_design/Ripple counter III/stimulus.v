module stimulus (q, T, clock, reset);

	input [3:0] q;
	output T, clock, reset;
	
	reg T, clock, reset;
	
	always
		#5 clock = ~clock; //toggle clock every 5 time units

	initial
	begin
		clock = 1'b0; //set clock to 0		
		T = 1'b0; //T = 0 pauses the counter
		reset = 1'b1; //high reset clears the counter
		#15 reset = 1'b0; //low reset causes the counter to count
		#15 T = 1'b1; //T = 1 causes the counter to count
		#60 T = 1'b0; //T = 0 pauses the counter
		#30 T = 1'b1; //T = 1 resumes the counter
		#500 $finish; //terminate the simulation
	end

	// monitor the outputs
	initial
		$monitor($time, ", T = %b, reset = %b, Output q = %d", T, reset, q);

endmodule