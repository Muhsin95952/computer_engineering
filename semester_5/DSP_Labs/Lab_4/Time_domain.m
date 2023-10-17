% Sinusoidal Signal
clc
clear
close all

t = 0 : 0.001 : 1;
fa = 10;
fb = 20;
fc = 30;
fd = 40;
fe = 50;
ff = 60;

%% Time Domain

a = sin(2*pi*fa*t);
subplot(3, 2, 1)
plot(t, a);
xlabel('Time (s)');
ylabel('Aplitude');
title('Sinusoi Signal With f = 10 Hz');
axis([0, 1, -1.5, 1.5]);
grid on;

%fb = 20;

b = sin(2*pi*fb*t);
subplot(3, 2, 2)
plot(t, b);
xlabel('Time (s)');
ylabel('Aplitude');
title('Sinusoi Signal With f = 20 Hz');
axis([0, 1, -1.5, 1.5]);
grid on;


%fc = 30;

c = sin(2*pi*fc*t);
subplot(3, 2, 3)
plot(t, c);
xlabel('Time (s)');
ylabel('Aplitude');
title('Sinusoi Signal With f = 30 Hz');
axis([0, 1, -1.5, 1.5]);
grid on;


%fd = 40;

d = sin(2*pi*fd*t);
subplot(3, 2, 4)
plot(t, d);
xlabel('Time (s)');
ylabel('Aplitude');
title('Sinusoi Signal With f = 40 Hz');
axis([0, 1, -1.5, 1.5]);
grid on;


%fe = 50;

e = sin(2*pi*fe*t);
subplot(3, 2, 5)
plot(t, e);
xlabel('Time (s)');
ylabel('Aplitude');
title('Sinusoi Signal With f = 50 Hz');
axis([0, 1, -1.5, 1.5]);
grid on;


%ff = 60;

F = sin(2*pi*ff*t);
subplot(3, 2, 6)
plot(t, F);
xlabel('Time (s)');
ylabel('Aplitude');
title('Sinusoi Signal With f = 60 Hz');
axis([0, 1, -1.5, 1.5]);
grid on;

%% Frequency Domain


N = length(a);
fft_a = fft(a);

freq_a = (0:N-1)*(fa/N);

subplot(3, 2, 1)
plot(freq_a, abs(fft_a));
xlabel('X-axis');
ylabel('Amplitude');
title('Fourier transform f = 10')
axis([-1, 11, -1.5, 700]);
grid on;

N = length(b);
fft_b = fft(b);

freq_b = (0:N-1)*(fb/N);

subplot(3, 2, 2)
plot(freq_b, abs(fft_b));
xlabel('X-axis');
ylabel('Amplitude');
title('Fourier transform f = 20')
axis([-1, 21, -1.5, 700]);
grid on;

N = length(c);
fft_c = fft(c);

freq_c = (0:N-1)*(fc/N);

subplot(3, 2, 3)
plot(freq_c, abs(fft_c));
xlabel('X-axis');
ylabel('Amplitude');
title('Fourier transform f = 30')
axis([-1, 31, -1.5, 700]);
grid on;

N = length(d);
fft_d = fft(d);

freq_d = (0:N-1)*(fd/N);

subplot(3, 2, 4)
plot(freq_d, abs(fft_d));
xlabel('X-axis');
ylabel('Amplitude');
title('Fourier transform f = 40')
axis([-1, 41, -1.5, 700]);
grid on;

N = length(e);
fft_e = fft(e);

freq_e = (0:N-1)*(fe/N);

subplot(3, 2, 5)
plot(freq_e, abs(fft_e));
xlabel('X-axis');
ylabel('Amplitude');
title('Fourier transform f = 50')
axis([-1, 51, -1.5, 700]);
grid on;

N = length(F);
fft_F = fft(F);

freq_f = (0:N-1)*(ff/N);

subplot(3, 2, 6)
plot(freq_f, abs(fft_F));
xlabel('X-axis');
ylabel('Amplitude');
title('Fourier transform f = 60')
axis([-1, 61, -1.5, 700]);
grid on;

%% Sum of all time domain signals
subplot(2, 1, 1);
time_sum = a + b + c + d + e + F;
plot(t, time_sum);

subplot(2, 1, 2);
freq_sum = fft_a + fft_b + fft_c + fft_d + fft_e + fft_F;
plot(abs(freq_sum));

%% Noise Signal
frequency = 100;
noise = sin(2*pi*frequency*t);
subplot(3, 1, 1);
plot(t, noise);
axis([0, 1, -1.5, 1.5]);
grid on;

subplot(3, 1, 2);
noise_sum = time_sum + noise;
plot(t, noise_sum);

N = length(noise);
fft_noise = fft(noise);

freq_noise = (0:N-1)*(frequency/N);

freq_noise_sum = freq_sum + fft_noise;
subplot(3, 1, 3)
plot(freq_noise, abs(freq_noise_sum));
axis([-6 1, 61, -1.5, 700]);
grid on;
