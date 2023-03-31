function [x, w] = scalling(x, y)

subplot(2, 1 ,1)
stem(x)

w = y.*x;

subplot(2, 1 ,2)
stem(w)
end

