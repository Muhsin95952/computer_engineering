% Lab No. 05 task No. 1

clc
close 
close all

figure
time = 0:0.001:0.15;

signal = sin(2*pi*50*time) + sin(2*pi*120*time);
plot(time, signal, 'g');
title('Sin Signal');
xlabel('Time');
ylabel('Amplitude');
%% Noise Signal

figure
std = 2;
%[rows, cols] = size(time);
noise = signal + std*randn(size(time));

plot(time, noise, 'k');
title('Noise Signal');
xlabel('Time');
ylabel('Amplitude');
%% Sum of sin and Noise signal

figure
sum = noise + signal;

plot(time, sum, 'b');
title(' Sin + Noise Signal');
xlabel('Time');
ylabel('Amplitude');

%% Fourier transform of noise signal
figure
N = length(sum);

f = (-N/2 : N/2-1)*1000/N;
fft_noise = fftshift(abs(fft(sum, 151)));
size(f)
size(fft_noise)

plot(f, fft_noise);
title('Transformed  Signal');
xlabel('Time');
ylabel('Amplitude');

%% Power spectral Density
figure
pyy = fft_noise.*conj(fft_noise)/151;
f1 = 1000/151*(0:150);
size(f1)
size(pyy)

plot(f1, pyy);
title('Power Spectral density');
xlabel('Power/freq dB/Hz)');
ylabel('Frequency');

%% Periodogram 
figure
[pyy2, w] = periodogram(noise, rectwin(length(noise)),length(noise), 1000);

plot(w, 10*log10(pyy2));

title('Periodogram power Spectral Density estimate');
xlabel('Power/Freq(dB/Hz)');
ylabel('Frequency');

%% Power Spectral Density

figure
size(f1)
size(pyy)

plot(f1(1:50), pyy(1:50))

title('Power Spectral Density');
xlabel('Energy of Signal');
ylabel('frequency');
