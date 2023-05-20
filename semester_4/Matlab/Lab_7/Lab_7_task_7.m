%{
    Use interp command in the above program to interpolate (up?sample)
 the signal by a factor of 2. 
%}

clc

n = -2:1/1000:2; 
x1 = sin(2*pi*2*n); 
x2 = interp(x1, 2);
x3 = decimate(x1, 2);

subplot(3, 1, 1); 

plot(x1); 
title('Original signal'); 
xlabel('Sample Number'); 
ylabel('Signal Amplitude'); 
axis([0 4000 -2 2]); 
grid;  

subplot(3,1,2);

plot(x2); 
title('Interpolated signal'); 
xlabel('Sample Number'); 
ylabel('Signal Amplitude'); 
axis([0 4000 -2 2]); 
grid;

subplot(3,1,3);

plot(x3); 
title('Decimated signal'); 
xlabel('Sample Number'); 
ylabel('Signal Amplitude'); 
axis([0 4000 -2 2]); 
grid;