%{
    Create a function by name of sig_causal in matlab that
     has two input arguments:
  (i) a discrete?time signal, and 
  (ii) a position vector. 
      The function should make the given signal causal and return the 
    resultant signal to the calling program. 
%}

clc
close

t = -2:1/40:3;
signal = sin(pi*2*t);
u = (t>=0);

subplot(2, 1, 1);
%  Ploting Original Signal
stem(t, signal, 'filled');
title('Causal signal');
xlabel('Time domain');
ylabel('Amplitude');
grid;

% Calling Function
y = sig_causal(signal, u);

subplot(2, 1, 2);
%ploting the Sausal Signal
stem(t, y, 'filled');
title('Causal signal');
xlabel('Time domain');
ylabel('Amplitude');
grid;