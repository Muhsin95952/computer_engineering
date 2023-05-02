%{  
   Modify the example given in topic 6.2 to generate a sine wave with
   phase shift of +pi/2. Then plot a cosine wave of same frequency, 
   amplitude, and phase shift of 0 in another subplot. Compare 
   both the signals and determine the relationship between the two.
%}

clc
clear 

A = 2;
fs = 100;
t = -3:1/fs:3;
phase = pi/2;

x1 = A*sin(2*pi*t + phase);
x2 = A*acos(2*pi*t + 0);

subplot(2, 1, 1);
stem(t, x1, 'filled');
title('Sine wave with phase shift of pi/2');
xlabel('Time index');
ylabel('Amplitude');
grid

subplot(2, 1, 2);
stem(t, x2, 'filled');
title('Cosine wave with phase shift of 0');
xlabel('Time index');
ylabel('Amplitude');
grid