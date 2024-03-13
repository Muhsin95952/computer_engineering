module MUX2x1(Out, S, I0, I1);
input S, I0, I1;
output Out;
 wire S_bar, O1, O2;

 not s1(S_bar, S);
 and a1(O1, I0, S_bar);
 and a2(O2, I1, S);
 or a3(Out, O1, O2);

 endmodule 

