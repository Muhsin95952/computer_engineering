n = [1:10];
signal = input('Enter the signal: ');
down = downSample(signal);
subplot(2,1,1);
title('Original Sample')
stem(n, signal);
xlabel('Sample Number');
ylabel('Amplitude');
subplot(2,1,2);
stem(n, down);
xlabel('Sample Number');
title('Downsampled Sample')
ylabel('Amplitude');
