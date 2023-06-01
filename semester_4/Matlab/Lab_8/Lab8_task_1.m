%{
    Sample the signal given in above example to get its discrete?time
 counterpart (take 10 samples/sec as sampling rate). Make the resultant 
    signal causal. Display the lollipop plot of each signal.
%}

clc
close all

t = -2:1/30:2;
x1 = sin(2*pi*2*t);
u = (t>=0);
x2 = x1.*u;

subplot(3, 1, 1);
stem(t, x1, 'filled', 'k');
title('Original Signal of sin(2pi*f*t)');
xlabel('Time domain');
ylabel('Amplitude');
axis([-2.5 2.5 -1.5 1.5]);
grid;

subplot(3, 1, 2);
plot(t, u, 'k');
title('Unit step Signal');
xlabel('Time domain');
ylabel('Amplitude');
axis([-2.5 2.5 -1.5 1.5]);
grid;

subplot(3, 1, 3);
stem(t, x2, 'filled', 'r');
title('causal Signal');
xlabel('Time domain');
ylabel('Amplitude');
axis([-2.5 2.5 -1.5 1.5]);
grid;
