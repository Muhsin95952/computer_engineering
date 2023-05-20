%{
    Delay the original signal given in above example by 1 sec. 
    Plot both the delayed & original signal on 
    the same figure.
%}
clc

n=0:0.002:5; 
x=sin(2*pi*1*n); 

subplot(2,1,1);

plot(n, x,'linewidth',2); 
title('Original Signal'); 
xlabel('Time'); 
ylabel('Signal Amplitude'); 
axis([-1 5 -1 1]); 
grid; 

subplot(2,1,2); 

plot(n + 1, x, 'linewidth', 2); 
title('Advanced signal'); 
xlabel('Time'); 
ylabel('Signal Amplitude'); 
axis([-1 5 -1 1]); 
grid; 