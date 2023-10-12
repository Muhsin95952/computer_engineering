xx = [zeros(1,3), linspace(0, 1, 5), ones(1, 4)]
xx(4:6)
size(xx)
length(xx)
xx(2:2:length(xx))
xx(2:2:end)

yy = xx

yy(4:6) = pi * (1/3)

xx(2 : 2 : end) = pi