% Sinusoidal Signal
clc
clear
close all

t = -5 :0.01: 5;

T = 5;
f = 1/T;

x = sin(2*pi*f*t);

plot(t, x);
xlabel('Time (s)');
ylabel('Aplitude');
title('Sinusoi Signal');
axis([-6, 6, -2, 2]);
grid on;