clc
clear 
clear all


num = [1 7 12]
dnum = [1 11 30]
sys=tf(num,dnum); 
sisotool(sys); 
