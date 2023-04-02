%    Generate the complex valued signal    y(n) = exp(-0.2 + j0.5)n,  ?10?n?10
%    and plot its magnitude, phase, the real part, 
%    and the imaginary part in separate subplots.

clc
clear

n = -10:0.01:10;
y = exp(-0.2 + n*0.5*i);

magn = abs(y);
phase = angle(y);
real = real(y);
img = imag(y);

subplot(4, 1, 1);
title('Magnitude of Exponential signal');
plot(n, magn, 'linewidth', 2);

subplot(4, 1, 2);
title('Phase of Exponential signal');
plot(n, phase, 'linewidth', 2);

subplot(4, 1, 3);
title('Real of Exponential signal');
plot(n, real, 'linewidth', 2);

subplot(4, 1, 4);
title('Imaginary of Exponential signal');
plot(n, img, 'linewidth', 2);