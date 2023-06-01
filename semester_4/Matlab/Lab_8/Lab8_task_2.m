%{
    A signal is said to be anti?causal if it exists for values of n<0. 
     Make the signal given in above example anti?causal.
%}

clc
close all

t = -2:1/30:2;
x1 = sin(2*pi*2*t);
u = (t<=0);
x2 = x1.*u;

subplot(3, 1, 1);
stem(t, x1, 'filled', 'k');
title('Original Signal of sin(2pi*f*t)');
xlabel('Time');
ylabel('Amplitude');
axis([-2 2 -1 1]);
grid;

subplot(3, 1, 2);
plot(t, u, 'k');
title('Unit step Signal');
xlabel('Time');
ylabel('Amplitude');
axis([-2 2 -1 1]);
grid;

subplot(3, 1, 3);
stem(t, x2, 'filled', 'r');
title('Anti-causal Signal');
xlabel('Time');
ylabel('Amplitude');
axis([-2 2 -1 1]);
grid;