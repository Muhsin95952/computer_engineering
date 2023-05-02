%{
   Write matlab code that draw graphs of sin (n?x) on the interval ?1?x?1 
   for n = 1, 2, 3, …, 8. (Hint:Use for loop)
%}

clc
clear
clear all

x = -1:0.001:1;
for n=1:8
    y = sin(n*pi*x);
    subplot(8,1,n);
    plot(x, y, 'linewidth', 2);
    xlabel('Time Index');
    ylabel('signal Amplitude');
    grid;
end