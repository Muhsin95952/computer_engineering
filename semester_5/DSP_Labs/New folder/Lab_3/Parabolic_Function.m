% Parabolic Function
clc
clear
close all

t = -5 : 0.01 : 5;
a = 0.4;
x1 = (a*(t.^2))/2;
x2 = 0;

x = x1.*(t>=0) + x2.*(t<0);

plot(t, x);
xlabel('Time (s)');
ylabel('Aplitude');
title('Parabolic Function');
axis([-6, 6, -1, 2]);
grid on;