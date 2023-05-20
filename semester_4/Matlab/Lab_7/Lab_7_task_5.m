%{
    Flip the following signal: 
            x[n]= 2?[n]+ 5?[n?1] + 8?[n?2] + 4?[n?3] + 3?[n?4] 
    Plot the original signal as well as the 
    flipped one in the same figure. 
%}

clc

n = -2:1:4;
x = [0 0 2 5 8 4 3];

subplot(2, 1, 1);
stem(n, x, 'filled');
xlabel('Numbers');
ylabel('Amplitude');
title('Original Signal');
axis([-3 4 -1 9]);
grid;

subplot(2, 1, 2);
stem(-n, x, 'filled');
xlabel('Numbers');
ylabel('Amplitude');
title('Flipped Signal');
axis([-5 3 -1 9]);
grid;