%   a) Generate the signal x(t) = Aej(?t + ?) for A = 3, ?= ?0.4, and ? = 2?(1250).
%        Take a range for t that will cover 2 or 3 periods. 
%   b) Plot the real part versus t and the imaginary part versus t.  
%      Use subplot(2,1,i) to put both plots in the same window. 
%   c) Verify that the real and imaginary parts are sinusoids and that 
%      they have the correct frequency, phase, and amplitude.

clc
clear

A = 3;
n = -0.4;
w = 2*n*1250;
t = 1:0.1:5;

x = A*exp(w*t*i + n);

subplot(2, 1, 1);
title('Real Part of exponential signal');
plot(t, real(x));
xlabel('Time domain');
ylabel('Amplitude of real part');
grid

subplot(2, 1, 2);
title('Imaginary part of exponential signal');
plot(t, imag(x));
xlabel('Time domain');
ylabel('Amplitude of imaginary part');
grid