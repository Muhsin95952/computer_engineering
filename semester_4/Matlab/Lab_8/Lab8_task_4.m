%{
    Convolve the following 
          signals: x =[2 4 6 4 2];
           h =[3 ?1 2 1];
    Plot the input signal as well as the output signal.
%}

clc
close all

x = [2 4 6 4 2];
h = [3 -1 2 1];

y = conv(h, x);

subplot(2, 1, 1);
stem(x, 'k','filled');
title('Discrete filter Input Signal');
xlabel('Time');
ylabel('Amplitude');
axis([1 10 0 20]);
grid;

subplot(2, 1, 2);
stem(y, 'r', 'filled');
title('Discrete filter Output Signal');
xlabel('Time');
ylabel('Amplitude');
axis([1 10 0 20]);
grid;