% Triangular Signal
clc
clear
close all

t = -5 : 5;
a = 4;
x1 = 1 - abs(t)/a;
x2 = 0;

x = x1.*(abs(t)<= a) + x2.*(abs(t) > 0);
grid on;
plot(t, x);
xlabel('Time (s)');
ylabel('Aplitude');
title('Triangular Signal');
axis([-6, 6, -1, 2]);
grid on;