module task_4_tb();
reg x1, x2, x3, x4, x5;
wire Z;

task_4 t1(Z, x1, x2, x3, x4, x5);

initial begin
x1 = 0;     x2 = 0;
x3 = 0;     x4 = 0;
x5 = 0;
#10 $display("x1=%b  x2=%b  x3=%b  x4=%b  x5=%b  Z=%b", x1, x2, x3, x4, x5, Z);
x1 = 1;     x2 = 0;
x3 = 1;     x4 = 0;
x5 = 1;
#10 $display("x1=%b  x2=%b  x3=%b  x4=%b  x5=%b  Z=%b", x1, x2, x3, x4, x5, Z);
x1 = 0;     x2 = 1;
x3 = 0;     x4 = 1;
x5 = 0;
#10 $display("x1=%b  x2=%b  x3=%b  x4=%b  x5=%b  Z=%b", x1, x2, x3, x4, x5, Z);
x1 = 1;     x2 = 1;
x3 = 1;     x4 = 1;
x5 = 1;
#10 $display("x1=%b  x2=%b  x3=%b  x4=%b  x5=%b  Z=%b", x1, x2, x3, x4, x5, Z);

end
endmodule



