%{
    Convolution is commutative. Given x[n] and h[n] as: 
        X[n]=[1 3 2 1] 
        H[n]=[1 1 2] 
      Show that x[n] * h[n] = h[n] * x[n]. 
%}

clc
close

X = [1 3 2 1 2 3];
H = [1 1 2];

A = conv(X, H);
B = conv(H, X);

subplot(2, 1, 1);
stem(A, 'filled');
title('Commutative property w.r.t Addition');
xlabel('Time');
ylabel('Amplitude');
axis([0, 9, 0 15]);
grid;

% Ploting (x1 * x2) * x3
subplot(2, 1, 2);
stem(B, 'filled');
title('Hence proved that Convolution is Commutative');
xlabel('Time');
ylabel('Amplitude');
axis([0, 9, 0 15]);
grid;
