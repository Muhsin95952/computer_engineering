n = -10:1:10;

A=2;
alpha1 = -0.5;
alpha2 = 0.7;
alpha3 = 1.1;

x1 = A * alpha1.^(n);
x2 = A * alpha2.^(n);
x3 = A * alpha3.^(n);

% Create the first subplot
subplot(2,2,1);
stem(n, x1, 'filled', 'LineWidth', 2);
grid on;
title('Exponential Sequence: x[n] = A*aplha^n for alpha1 = -0.5');
xlabel('n');
ylabel('x1[n]');

% Create the second subplot
subplot(2,2,2);
stem(n, x2, 'filled', 'LineWidth', 2);
grid on;
title('Exponential Sequence: x[n] = A*aplha^n for alpha2 = 0.7');
xlabel('n');
ylabel('x2[n]');

% Create the third subplot
subplot(2,2,3);
stem(n, x3, 'filled', 'LineWidth', 2);
grid on;
title('Exponential Sequence: x[n] = A*aplha^n for alpha1 = 1.1');
xlabel('n');
ylabel('x3[n]');

