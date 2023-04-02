%   Multiply the two discrete signals x1=5exp(i*n*pi/4) and x2= an
%   (use point?by?point multiplication of the two signals).
%    Plot the real as well as the exponential parts for 0<a<1 and a>1.

clc 
clear

A = 5;
n = 1:0.1:10;
a = 1.5;

x1 = A*exp(n*(pi/2)*1i);
x2 = a.^n;
% Multiplication of two signals
y = x1.*x2;

subplot(4, 1, 1);
title('Exponential signal');
stem(n, x1, 'filled');
grid

subplot(4, 1, 2);
title('Real exponential signal');
stem(n, x2, 'filled');
grid

subplot(4, 1, 3);
title('Multplication of exponential and real_expo signal');
stem(n, y, 'filled');
grid

subplot(4, 1, 4);
title('Real part of the resultant signal');
stem(n, real(y), 'filled');
grid