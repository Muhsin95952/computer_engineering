%{
    Write a general program that takes ‘n’ sinusoids from
 user of same frequency, amplitude, and phase. Plot the 
individual sinusoids & the resultant using subplot function
 on same figure. Do perform proper labeling. Note: Take the 
amplitude, frequency, and phase given in example of case 1.
 Run the code for different values of n and state the result on paper. 
%}

clear all;
clc;

freq = 2*pi/10; 
amplitude = 1;
phase = 0;

% Prompt the user to enter the number of sinusoids to be plotted
n = input('Enter the number of sinusoids: ');

t = linspace(0, 2*pi, 1000);
x = zeros(1, length(t));

for i=1:n
    phase_shift = input(['Enter the phase shift for sinusoid ' num2str(i) ': ']);
end

for i = 1:n
    
    y = amplitude*sin(freq*t + phase + phase_shift);
    x = x + y;
    
    subplot(n, 1, i);
    plot(t, y);
    xlabel('Time (s)');
    ylabel('Amplitude');
    title(['Sinusoid ' num2str(i)]);
end

% Plot the resultant signal in the last subplot
subplot(n, 1, n);
plot(t, x);
xlabel('Time (s)');
ylabel('Amplitude');
title('Resultant Signal');
