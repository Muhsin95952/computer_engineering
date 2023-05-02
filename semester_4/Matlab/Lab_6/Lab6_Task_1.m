%   Generate the 1x10 row vector v whose i?th component is cos (i?/4).

clc
clear
clear all

% Task

v = 1:1:10;
for i=1: 10
    x = cos(v*pi/4);
    disp(x);
end

