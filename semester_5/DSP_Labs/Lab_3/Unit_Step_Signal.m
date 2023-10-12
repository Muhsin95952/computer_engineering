% Unit Step Signal
clc
clear
close all

t = -5 : 5;
x1 = 1;
x2 = 0;

x = x1.*(t>=0) + x2.*(t<0);

plot(t, x);
xlabel('Time (s)');
ylabel('Aplitude');
title('Unit Step Signal');
axis([-6, 6, -1, 2]);
grid on;