module task_4(Z, x1, x2, x3, x4, x5);
input x1, x2, x3, x4, x5;
output Z;

wire y1, y2, m1;

and a1(y1, x1, x2);
and a2(m1, x3, x4);
and a3(y2, m1, x5);

or o1(Z, y1, y2);

endmodule


