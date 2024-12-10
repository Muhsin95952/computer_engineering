num = 4;
denum = [1 4 50];

step(num, denum)
trans = tf(num, denum);
pzmap(trans)