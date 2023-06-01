%{
    Convolution is associative. Given the three signal x1[n], x2[n], and x3[n] 
as:      x1[n]= [3 1 1] 
         x2[n]= [4 2 1] 
         x3[n]=[3 2 1 2 3] 
Show that (x1[n] * x2[n]) * x3[n] = x1[n] * (x2[n] * x3[n]). 
%}

clc
close

x1 = [3 1 2 3 4 1 1];
x2 = [4 3 2 1 2 1 3];
x3 = [3 2 1 2 3 2 2 4];

y =  x1.*(x2.*x2);
z = (x1.*x2).*x2;

% Ploting x1 * (x2 * x3)
subplot(2, 1, 1);
stem(y, 'filled');
title('Associative property w.r.t Multiplication');
axis([0, 8, 0 50]);

% Ploting (x1 * x2) * x3
subplot(2, 1, 2);
stem(z, 'filled');
title('Hence proved that Convolution is Associative');
axis([0, 8, 0 50]);
