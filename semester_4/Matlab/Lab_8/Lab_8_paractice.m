t = -2:1/1000:2;
x1 = sin(2*pi*2*t);

u = (t>=0);
x2 = x1.*u;

subplot(2, 1, 1);
plot(x1);
subplot(2,1, 2);
plot(x2);
