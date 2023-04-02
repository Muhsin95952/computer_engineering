%    Determine the complex conjugate of the exponential signal given 
%   in above example and plot its real and imaginary portions.

clc 
clear

n=0:1/10:10;
k=5;
a=pi/2;
x=k * exp(a*n*i);

subplot(4, 1, 1);
title('Real part of exponential signal');
stem(n, real(x), 'linewidth', 3);
xlabel('sample # 1');
ylabel('Amplitude of signal');
grid

subplot(4, 1, 2);
title('imaginary part of exponential signal');
stem(n, imag(x), 'linewidth', 3);
xlabel('sample # 2');
ylabel('Amplitude of signal');
grid

% conjugate of exponential signal
y = conj(x);

subplot(4, 1, 3);
title('Real part of the conjugate of exponential signal');
stem(n, real(y), 'linewidth', 3);
xlabel('sample # 3');
ylabel('Amplitude of conjugate of signal');
grid

subplot(4, 1, 4);
title('Imaginary part of exponential signal');
stem(n, imag(y), 'linewidth', 3);
xlabel('sample # 4');
ylabel('Amplitude of signal');
grid
