fs = 1125;
du = 3;
tt = 0 : 1/fs : du;
xx = 354*cos(2000*pi*tt);
sound(xx, fs);