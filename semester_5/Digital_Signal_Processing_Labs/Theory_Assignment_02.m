%% sin signal
clc
close
close all

time = 0:0.001:1;
freq = 7;

signal = sin(2*pi*freq*time);
plot(time, signal, 'linewidth', 2);
xlabel('Time (s)');
ylabel('Amplitude');
title('Sin signal');
grid on;

%% Noise signal

[rows, cols] = size(time);
mean = 4;
std = 5;
noise = mean + std*rand(cols, 1);
plot(time, noise);
xlabel('Time (s)');
ylabel('Amplitude');
title('Noise signal');
grid on;
%axis([0, 1, 2, 8])

%% noise + sin signal

summ = noise + transpose(signal);
plot(time, summ);
xlabel('Time (s)');
ylabel('Amplitude');
title('Noise + Sin signal');
grid on;

%% Smoothing

subplot(3, 1, 1);
m1 = smooth(summ, 3);
plot(time, m1);
xlabel('Time (s)');
ylabel('Amplitude');
title('Smoothing, window size 3');
grid on;

subplot(3, 1, 2);
m2 = smooth(summ, 5);
plot(time, m2);
xlabel('Time (s)');
ylabel('Amplitude');
title('Smoothing, window size 5');
grid on;

subplot(3, 1, 3);
m3 = smooth(summ, 7);
plot(time, m3);
xlabel('Time (s)');
ylabel('Amplitude');
title('Smoothing, window size 7');
grid on;




