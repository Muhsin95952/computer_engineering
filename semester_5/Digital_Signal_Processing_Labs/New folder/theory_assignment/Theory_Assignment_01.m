n = -10:1:10;

A=1.5;

w1 = 0;
w2 = pi/4;
w3 = pi/8;

phi = 0;

x1 = abs(A) * exp(1i*(w1*n + phi));
x2 = abs(A) * exp(1i*(w2*n + phi));
x3 = abs(A) * exp(1i*(w3*n + phi));


% Create the first subplot
subplot(2,2,1);
stem(n, x1, 'filled', 'LineWidth', 2);
grid on;
title('Exponential Sequence: x1[n] = |A| * e^j^(^w^1^n^+^\phi^), w1 = 0');
xlabel('n');
ylabel('x1[n]');

% Create the second subplot
subplot(2,2,2);
stem(n, x2, 'filled', 'LineWidth', 2);
grid on;
title('Exponential Sequence: x2[n] = |A| * e^j^(^w^2^n^+^\phi^), w2 = \pi/4');
xlabel('n');
ylabel('x2[n]');

% Create the third subplot
subplot(2,2,3);
stem(n, x3, 'filled', 'LineWidth', 2);
grid on;
title('Exponential Sequence: x3[n] = |A| * e^j^(^w^3^n^+^\phi^), w3 = \pi/8');
xlabel('n');
ylabel('x3[n]');