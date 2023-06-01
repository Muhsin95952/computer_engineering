clc
close

t = 0:0.0001:8;
ff = 0.5;

y = (4/pi)*sin(2*pi*ff*t);

for i = 3:2:27;
        fh = i*ff;
        x = (4/(i*pi))*sin(2*pi*fh*t);
        y = y + x;
    end
   
    plot(t, y, 'linewidth', 1.5);
    title('A square wave with Hormonics from 1st to 27th in Odd manner');
    xlabel('Time');
    ylabel('Amplitude');
    grid;