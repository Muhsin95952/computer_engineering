% Sinusoidal Signal
clc
clear
close all

t = 0 : 0.001 : 1;

f = 10;

x = sin(2*pi*f*t);
subplot(2, 3, 1)
plot(t, x);
xlabel('Time (s)');
ylabel('Aplitude');
title('Sinusoi Signal');
axis([0, 1, -1.5, 1.5]);
grid on;

