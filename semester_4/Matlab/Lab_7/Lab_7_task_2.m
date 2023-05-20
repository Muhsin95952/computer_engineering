%{
    Prove the following: 
                        ð[n] = u[n] — u[n — 1] 
%}
clc

x = -10:10;

y1 = [zeros(1, 10) ones(1, 11)];
y2 = [zeros(1, 11) ones(1, 10)];

y = y1 - y2;

subplot(2, 1, 1);
stem(x, y, 'filled');
xlabel('Sample #');
ylabel('Amplitude');
title('u[n] — u[n — 1]');
axis([-11, 11 -1 2]);
grid;

y3 = [zeros(1, 10) 1 zeros(1, 10)];

subplot(2, 1, 2);

stem(x, y3, 'filled');
xlabel('Sample #');
ylabel('Amplitude');
title(' ð[n]');
axis([-11, 11 -1 2]);
grid;