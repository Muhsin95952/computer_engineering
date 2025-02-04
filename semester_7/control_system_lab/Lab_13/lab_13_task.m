clc
clear
clear all

num = 1;
dnum = [1 3 1];
g = tf(num, dnum);
sys = feedback(g, 1);
step(sys);
hold on 

kp = 20;
ki = 1;
kd = 1;

p = pid(kp, ki, kd);
sys_new = feedback(p*g, 1);
step(sys_new);

% p = pidtune(g, 'pid')
