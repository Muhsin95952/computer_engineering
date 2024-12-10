% Design 3 sysetems of complex poles
% stable

num = 1;
denum = [1 2 10];
step(num, denum)
trans = tf(num, denum);
pzmap(trans)


%% Unstable system

num = 1;
denum = [1 -2 10];
step(num, denum)
trans = tf(num, denum);
pzmap(trans)
%% Marginal stable

num = 1;
denum = [10 0 15];
step(num, denum)
trans = tf(num, denum);
pzmap(trans)