%{
    Scale the continuous?time sinusoid used in signal 
    shifting example by a factor of 2.
%}

clc

t = -10:1/1000:10;
omega = 2*pi/3;
A = 2;

x = A*exp(1j*omega*t);

subplot(2, 1, 1);
plot(t, x, 'linewidth', 2);
xlabel('Time Domain');
ylabel('Amplitude');
title('Original Sinuside');
axis([-11 11 -5 5]);
grid;

s = 2;
subplot(2, 1, 2);
plot(t, s*x, 'linewidth', 2);
xlabel('Time Domain');
ylabel('Amplitude');
title('Scaled Sinuside');
axis([-11 11 -5 5]);
grid;