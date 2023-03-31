clear

x = -1:0.001:1;
for n=1:8
    y = sin(n*pi*x);
    subplot(8,1,n);
    plot(x, y, 'linewidth', 2);
    xlabel('Time Index');
    ylabel('signal Amplitude');
    grid;
end