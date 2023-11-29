module stm_adder();
reg A0,B0;
wire C0, SUM;
half_adder add(A0,B0,C0,SUM);
initial 
begin
$display("A0, B0, C0, SUM");
A0=0;
B0=0;
#10
$display("%b %b %b %b", A0,B0,C0,SUM);
A0=0;
B0=1;
#10
$display("%b %b %b %b", A0,B0,C0,SUM);
A0=1;
B0=0;
#10
$display("%b %b %b %b", A0,B0,C0,SUM);
A0=1;
B0=1;
#10
$display("%b %b %b %b", A0,B0,C0,SUM);
end
endmodule
