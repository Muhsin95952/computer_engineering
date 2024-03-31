module top_rc;

	wire clk, init;
	wire [7:0] count;

	rc rc0 (clk, init, count);
	test_rc t_rc0 (clk, init, count);

endmodule