
tt = -1 : 0.01 : 1;
xx = cos(5*pi*tt);
zz = 1.4*exp( 1i*pi/2) * exp(1i*5*pi*tt);
plot(tt, xx, 'b-', tt, real(zz), 'r-')
grid on
xlabel('TIME (sec)');
ylabel('Amplitude');
title('Test plot of a sinuside');