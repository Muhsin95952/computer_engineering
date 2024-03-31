module rc (clk, init, count);

	input clk, init;
	output [7:0] count;
	
	reg [7:0] count;

	always @(init or posedge clk)
		if (init)
			count = 8'b10000000;
		else 
			count = {count[6:0], count[7]}; 
			
endmodule