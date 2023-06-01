%{
Given the signals: 
    x1[n]= 2?[n] ?3?[n?1]+ 3?[n?2] +4?[n?3] ?2?[n?4] 
    x2[n]= 4?[n]+ 2?[n?1]+ 3?[n?2] ? ?[n?3] ?2?[n?4] 
    x3[n]= 3?[n]+ 5?[n?1]?3?[n?2] +4 ?[n?3]  
Verify that 
    x1[n] * (x2[n] * x3[n]) = (x1[n] * x2[n]) * x3[n] 
    x1[n] * x2[n]= x2[n] * x1[n] 
%}

clc
close

X1 = [2 -3 3 1 -2 2 1 3 1];
X2 = [1 2 3 -1 -2 1 3 2 2];
X3 = [3 2 -3 1 2 3 2 2 1];

% Verifying that     X1[n] * (X2[n] * X3[n]) = (X1[n] * X2[n]) * X3[n] 
Y1 = X1 .* (X2 .* X3);
Y2 = (X1 .* X2) .* X3;

% Verifying that X1[n] * X2[n] = X2[n] * X1[n] 
Z1 = X1 .* X2;
Z2 = X2 .* X1;

subplot(4, 1, 1);
stem(Y1, 'r', 'filled');
title('X1[n] * (X2[n] * X3[n])');
xlabel('Time');
ylabel('Amplitude');

subplot(4, 1, 2);
stem(Y2, 'k', 'filled');
title('(X1[n] * X2[n]) * X3[n]');
xlabel('Time');
ylabel('Amplitude');

subplot(4, 1, 3);
stem(Z1, 'p', 'filled');
title('X1[n] * X2[n]');
xlabel('Time');
ylabel('Amplitude');

subplot(4, 1, 4);
stem(Z2, 'g', 'filled');
title('X2[n] * X1[n])');
xlabel('Time');
ylabel('Amplitude');
