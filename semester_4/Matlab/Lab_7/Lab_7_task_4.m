%{
  Flip the following signal: 
                    y = 5 exp(i ? n ?(?/4))
Plot the original signal as well as the
 flipped one in the same figure. 
%}

clc

n = -10:1/1000:15;
A = 5;

x = A*exp(1i*n*(pi/4));

subplot(2, 1, 1);
plot(n, x, 'linewidth', 2);
xlabel('time domain');
ylabel('Amplitude');
title('Original Signal');
axis([-11 16 -6 6])
grid;

subplot(2, 1, 2);
plot(-n, x, 'linewidth', 2)
xlabel('time domain');
ylabel('Amplitude');
title('Flipped Signal');
axis([-16 11 -6 6])
grid;
