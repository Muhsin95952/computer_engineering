module top_level;
	
	wire A, B, S, Cy;

	HA ha (S, Cy, A, B);
	tst_HA t_ha (S, Cy, A, B);

endmodule