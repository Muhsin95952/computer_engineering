%    a) Generate a real exponential x=a^n for a=0.7 and n ranging from 0?10. 
%        Find the discrete time as well as the continuous time version 
%       of this signal. Plot the two signals on same graph (holding both the graphs). 
%    b) Repeat the same program with value of a=1.3. 

clc
clear

a1 = 0.7;
n = 1:0.1:10;
x = a1.^n;

% Discrete time signal
subplot(4, 1, 1);
title('Discrete time signal ');
stem(n, x, 'linewidth', 3);

% Continous time signal
subplot(4, 1, 2);
title('Continous time signal ');
plot(n, x, 'linewidth', 3);

% Now for a = 1.3
a2 = 1.3;
m = 1:0.1:10;
y = a2.^m;

subplot(4, 1, 3);
title('Discrete time signal ');
stem(m, y, 'linewidth', 2);

subplot(4, 1, 4);
title('Continous time signal ');
plot(m, y, 'linewidth', 2);
