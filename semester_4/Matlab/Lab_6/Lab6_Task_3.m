%{  
     Given the signal exp(?x)sin(8x) for 0?x?2?, plot its continuous?time 
     and discrete?time representations. Use subplot and label properly.
%}

clc 
clear
clear all

x  = 0:0.001:(2*pi);
y = exp(-x).*sin(8*x);
subplot(2, 1, 1)
title('Continous time sine signal and Discrete time sine signal')
plot(x, y, 'linewidth', 3)
xlabel('Time Index')
ylabel('signal Amplitude')

x  = 0:0.02:(2*pi);
y = exp(-x).*sin(8*x);
subplot(2, 1, 2)
stem(x, y)
xlabel('Time Index')
ylabel('signal Amplitude')
