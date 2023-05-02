%{
    Write a program to generate a continuous?time 
sine wave of frequency 3 Hz, positive phase shift of pi/2,
 and amplitude of 5. Also generate a continuous?time cosine wave
 of frequency 3 Hz, amplitude of 5, and phase shift of 0. Plot
 the two signals on separate subplots and properly label them. 
Determine the relationship between the two signals.  

%}

% Define the parameters of the sine wave
freq_sine = 3;  
phase_sine = pi/2; 
amplitude_sine = 5;  

% Define the parameters of the cosine wave
freq_cosine = 3; 
phase_cosine = 0;  
amplitude_cosine = 5;  

% Define the time axis for plotting
t = linspace(0, 1/freq_sine, 1000);  

% Generate the sine wave and cosine wave signals
sine_wave = amplitude_sine * sin(2*pi*freq_sine*t + phase_sine);
cosine_wave = amplitude_cosine * cos(2*pi*freq_cosine*t + phase_cosine);

% Plot the two signals on separate subplots
figure;
subplot(2,1,1);
plot(t, sine_wave);
xlabel('Time');
ylabel('Amplitude');
title('Sine Wave');

subplot(2,1,2);
plot(t, cosine_wave);
xlabel('Time');
ylabel('Amplitude');
title('Cosine Wave');

% Determine the relationship between the two signals
% The cosine wave is a 90-degree phase shift of the sine wave.
% This means that the cosine wave leads the sine wave by pi/2 radians.
