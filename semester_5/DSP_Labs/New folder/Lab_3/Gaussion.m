%% Gaussion function

clc
close
close all

t = -5 : 0.01 : 5;
a = 2;
gau = 2*exp(-a.*(t.^2));

plot(t, gau);
xlabel('Time (s)');
ylabel('Aplitude');
title('Gaussion Signal');
axis([-6, 6, -1, 3]);
grid on;