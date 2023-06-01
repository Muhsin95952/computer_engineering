%{
    Given the impulse response of the systems as: 
        h[n]= 2?[n] + ?[n?1]+ 2?[n?2]+ 4?[n?3]+ 3?[n?4] 
    If the input
        x[n] = ?[n]+ 4?[n?1] +3?[n?2] + 2?[n?3] 
    is applied to the system, determine the output of the system. 
%}

clc
close

t = [0 1 2 3 4];
H = [2 1 2 4 3];
X = [1 4 3 2];

Z = conv(H, X);

subplot(2, 1, 1);
stem(X, 'p', 'filled');
title('Given Signal X before Convolution');
xlabel('Time');
ylabel('Amplitude');
axis([0, 5, 0, 10]);
grid;

subplot(2, 1, 2);
stem(Z, 'r', 'filled');
title('Output of the given Signal X after Convolution');
xlabel('Time');
ylabel('Amplitude');
grid;