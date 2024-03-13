module MUX4x1(Out, S0, S1, I);
input [3:0]I;
input S0, S1;
output Out;

wire S0_bar, S1_bar;
wire [5:0]o;

not n1(S0_bar, S0);
not n2(S1_bar, S1);

and a1(o[0], I[0], S0_bar, S1_bar);
and a2(o[1], I[1], S0_bar, S1);
and a3(o[2], I[2], S0, S1_bar);
and a4(o[3], I[3], S0, S1);

or a5(o[4], o[0], o[1]);
or a6(o[5], o[2], o[3]);
or a7(Out, o[4], o[5]);

endmodule
