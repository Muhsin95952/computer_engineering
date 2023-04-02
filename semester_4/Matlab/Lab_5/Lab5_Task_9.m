%   Plot the discrete signal x=a^|n| for n ranging from ?10 to 10. 
%   Draw two subplots for 0<a<1 and a>1.

clc
clear

a1 = 0.36;
n = -10:0.1:10;
x1 = a1.^abs(n);

% for a less than 1 and greater than 0
subplot(2, 1, 1);
title('Discrete signal for a greater than 0 and less than 1');
stem(n, x1, 'filled');
xlabel('Time domain');
ylabel('Amplitude of signal');

a2 = 1.36;
x2 = a2.^abs(n);

% for a  greater than 1
subplot(2, 1, 2);
title('Discrete signal for a greater than 0 and less than 1');
stem(n, x2, 'filled');
xlabel('Time domain');
ylabel('Amplitude of signal');
