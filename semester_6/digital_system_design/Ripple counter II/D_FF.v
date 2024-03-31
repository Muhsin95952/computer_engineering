module D_FF (q, d, clock, reset);

	output q;
	input d, clock, reset;
	
	reg q;

	always @(negedge clock or posedge reset)
	begin
		if (reset)
			q = 1'b0;
		else
			q = d;
	end
	
endmodule