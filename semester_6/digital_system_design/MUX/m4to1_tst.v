module m4to1_tst; 

	// Inputs are regs here
	reg [3:0] I;
	reg [1:0] Sel;
		
	// Outputs are wires here
	wire Out;
	
	// Instantiate the Unit/Design Under Test (U/DUT)
	m4to1 m (Out, I, Sel);
	

	initial begin
	I=4'b0000; Sel=2'b00;
	#5 I=4'b0001; Sel=2'b00;
	#5 I=4'b0001; Sel=2'b11;
	#5 I=4'b1000; Sel=2'b11;
	#5 I=4'b1100; Sel=2'b10;
	#5 I=4'b1010; Sel=2'b10;
	#5 I=4'b1011; Sel=2'b01;
	end
	
	initial
	$monitor("I[I3,I2,I1,I0]=%b, Sel=%b--->Out=%b", I, Sel, Out);		
		      
endmodule