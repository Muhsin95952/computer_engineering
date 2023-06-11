%{
    Write a program that plots the signal s(t).
        s(t) = sin(2*pi*t) + sin(6*pi*t)/3 +  sin(10*pi*t)/5 + 
        sin(14*pi*t)/7 + sin(18*pi*t)/9

    What do you conclude from TASKS 2 & 3?
%}

clc
close all

t = -2:1/1000:2;
s = sin(2*pi*t);

for i = 1:2:9
    s = s + sin(2*i*pi*t)/i;
end

plot(t, s, 'linewidth', 1.5);
xlabel('Time');
ylabel('Amplitude of sin wave');
title('summation of Odd sin signals');
grid;