%{
    Two systems are connected in cascade: 
        h1[n]=[1 3 2 1]  
        h2[n]=[1 1 2] 
    If the input x[n] = ?[n]+ 4?[n?1] +3?[n?2] +2?[n?3] is applied, determine the output.
%}

clc
close

H1 = [1 3 2 1];
H2 = [1 1 2];
X = [1 4 3 2];

% First Convolution
Y1 = conv(H1, X);

% Second Convolution
Y2 = conv(H2, Y1);

subplot(2, 1, 1);
stem(Y1, 'p', 'filled');
title('First Convolution Output');
axis([0, 9, 0, 60]);

subplot(2, 1, 2);
stem(Y2, 'r', 'filled');
title('Second Convolution Output');
axis([0, 9, 0, 80]);
