%{
    Analyze the effect of Adding 1st to 17th
    harmonics and the effect of Adding 1st to 27th 
    harmonics in above example. 
%}

clc
close

t = 0:0.0001:8;
ff = 0.5;

y = (4/pi)*sin(2*pi*ff*t);

%for 1st to 17th Hormonics

for i = 3:2:17;
    fh = i*ff;
    x = (4/(i*pi))*sin(2*pi*fh*t);
    y = y + x;
end

subplot(2, 1, 1);
plot(t, y, 'linewidth', 1.5);
title('A square wave with Hormonics from 1st to 17th in Odd manner');
xlabel('Time');
ylabel('Amplitude');
grid;

y1 = (4/pi)*sin(2*pi*ff*t);

for k = 3:2:27;
        fh1 = k*ff;
        x1 = (4/(k*pi))*sin(2*pi*fh1*t);
        y1 = y1 + x1;
end
    
   subplot(2, 1, 2);
    plot(t, y1, 'linewidth', 1.5);
    title('A square wave with Hormonics from 1st to 27th in Odd manner');
    xlabel('Time');
    ylabel('Amplitude');
    grid;