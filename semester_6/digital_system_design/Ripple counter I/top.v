module top;

	wire [3:0] q;
	wire clock, reset;
	
	ripple_counter rc (q, clock, reset);
	stimulus tb (q, clock, reset);

endmodule 