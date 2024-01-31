x = [-3, -2, -1, 0, 1, 2, 3];
y = x.*x - 3 * x;
subplot(2,1,1);
stem(x, y)
z = x + y*sqrt(-1);
subplot(2,1,2);
stem(z)