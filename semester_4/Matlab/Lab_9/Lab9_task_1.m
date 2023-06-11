%{
    Calculate the power of discrete?time cosine signal with period 20,
    defined over interval 0:19 using the following formula
        P = 1/N*summationof(|x[n]|^2)          from 0 to N-1
%}

clc
close

n = 0:0.5:19;
N = 20;
Yt = cos(2*pi*n);
stem(n, Yt);
title('Discrete time signal');
xlabel('Time domain');
ylabel('Amplitude');
grid;

% Power of Dicscret signel
p_Yt = (1/N)*sum(abs(Yt).^2);




    