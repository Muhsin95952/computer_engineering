%{
    Using ones function, plot the signum sequence over 
    interval ?10?n?10. It can be defined as: 
            1,   for n > 0
sign(n) = {-1,  for n < 0
            0,   for n = 0
%}

clc


n = -10:10;
x = [-ones(1, 10) 0 ones(1, 10)];

stem(n, x, 'filled');
xlabel('sample #');
ylabel('Signal Amplitude');
title('Unit impulse signal');
axis([-11 11 -2 2])
grid