n= -7:7;
sg= [0,0,0,0,0,0,0,1,0,0,0,0,0,0,0];
x1 = 2*sg + 5*circshift(sg, 1) + 4*circshift(sg, 3) + 3*circshift(sg,4);
x2 = circshift(sg, 4) + 4*circshift(sg, 5) + 3*circshift(sg, 6) + 2*circshift(sg, 7);
add= x1 + x2;
subplot(3, 1, 1);
ylabel('x1');
stem(n,x1);
subplot(3, 1, 2);
ylabel('x2');
stem(n,x2);
subplot(3, 1, 3);
ylabel('Added DTSignal')
stem(n,add)
    