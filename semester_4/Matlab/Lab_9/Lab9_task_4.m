%{
    Generate a triangular wave with N=11 
%}

clc 
close

t = 0:0.0001:10;

x = (-8/(pi^2))*exp(1i*(2*pi*0.5*t));

for k = 1:2:11;
    y = (-8/(k^2*pi^2))*exp(1i*(2*pi*0.5*k*t));
    s = x + y;
end

plot(t, real(s), 'linewidth', 1.5);
title('Triangular Wave with N = 11');
xlabel('Time');
ylabel('Amplitude');
grid;
