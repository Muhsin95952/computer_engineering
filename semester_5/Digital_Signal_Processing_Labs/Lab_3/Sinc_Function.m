% Sinc Function
clc
clear
close all

t = -15 : 0.1 : 15;

x = sin(t)./t;

plot(t, x);
xlabel('Time (s)');
ylabel('Aplitude');
title('Sinc Function');
axis([-16, 16, -2, 2])
grid on;