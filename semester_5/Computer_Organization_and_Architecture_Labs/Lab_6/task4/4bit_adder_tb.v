module four_adder_tb();
reg a0, b0, a1, b1, a2, b2, a3, b3, cin;
wire s0, s1, s2, s3, c3;
four_bit add(a0, b0, a1, b1, a2, b2, a3, b3, cin,s0, s1, s2, s3, c3);
initial begin
$display("a0, b0, a1, b1, a2, b2, a3, b3, cin,s0, s1, s2, s3, c3");
a0 =0;
b0 =0;
a1 =0;
b1 =0;
a2 =0;
b2 =0;
a3 =0;
b3 =0;
cin=0;

#10
$display("%b  %b  %b  %b  %b %b %b %b %b %b %b %b %b %b ", a0, b0, a1, b1, a2, b2, a3, b3, cin,s0, s1, s2, s3, c3);

a0 =0;
b0 =1;
a1 =0;
b1 =1;
a2 =0;
b2 =1;
a3 =0;
b3 =1;
cin=0;

#10
$display("%b  %b  %b  %b  %b %b %b %b %b %b %b %b %b %b ", a0, b0, a1, b1, a2, b2, a3, b3, cin,s0, s1, s2, s3, c3);

a0 =1;
b0 =0;
a1 =1;
b1 =0;
a2 =1;
b2 =0;
a3 =1;
b3 =0;
cin=1;

#10
$display("%b  %b  %b  %b  %b %b %b %b %b %b %b %b %b %b ", a0, b0, a1, b1, a2, b2, a3, b3, cin,s0, s1, s2, s3, c3);

a0 =1;
b0 =1;
a1 =1;
b1 =1;
a2 =1;
b2 =1;
a3 =1;
b3 =1;
cin=0;

#10
$display("%b  %b  %b  %b  %b %b %b %b %b %b %b %b %b %b ", a0, b0, a1, b1, a2, b2, a3, b3, cin,s0, s1, s2, s3, c3);

a0 =1;
b0 =1;
a1 =1;
b1 =1;
a2 =1;
b2 =1;
a3 =1;
b3 =1;
cin=1;

#10
$display("%b  %b  %b  %b  %b %b %b %b %b %b %b %b %b %b", a0, b0, a1, b1, a2, b2, a3, b3, cin,s0, s1, s2, s3, c3);

a0 =1;
b0 =1;
a1 =1;
b1 =1;
a2 =0;
b2 =0;
a3 =0;
b3 =0;
cin=0;

#10
$display("%b  %b  %b  %b  %b %b %b %b %b %b %b %b %b %b ", a0, b0, a1, b1, a2, b2, a3, b3, cin,s0, s1, s2, s3, c3);


end
endmodule
