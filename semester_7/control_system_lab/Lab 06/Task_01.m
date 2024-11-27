
syms S;

f1 = ilaplace(3/(S*(S^2 + 2*S + 5)));
pretty(f1);

%%
f2 = ilaplace(1/S*(S + 2));
pretty(f2)

%%
f3 = ilaplace(1/S^2);
pretty(f3)

%%
syms a
f4 = ilaplace(1/(S - a)^2);
pretty(f4)

%%
%  Laplace transform

syms f t 
f = t;
a1 = laplace(f);
pretty(a1)

%%
f = cos(a*t);
a2 = laplace(f);
pretty(a2)

%% 
f = 1 + 2*exp(-t) + 3*exp(-2*t);
a3 = laplace(f);
pretty(a3)

%% Q8
f = 2*exp(-t) - 2*t*exp(-2*t) - 2*exp(-2*t);
a4 = laplace(f);
pretty(a4)

%% Q9: Fint the laplace transform through partial fraction
% F(s) = 4S^2 + 4S + 4 / S^2(S^2 + 3S + 2)

num = [0 0 4 4 4];
dnum = [1  3 2 0 0];
[r, p, k] = residue(num, dnum)

%% Q10: Using symbplic tables to solue the following
% (2S + 2)I1(S) - (2S + 1)I2(S) - I3(S) = V(S)
% -(2S + 1)I1(S) + (9S + 1)I2(S) - 4SI3(S) = 0
% -I1(S) - 4SI2(S) - (4S + 1 + 1/S)I3(S) = 0

syms I1 I2 I3 V
A = [2*S+2 -2*S-1 -1;
     -2*S-1 9*S+1 -4*S;
     -1 -4*S 4*S+1+1/S];
 B = [I1; I2; I3];
 C = [V; 0; 0];
 
 B = inv(A)*C;
 pretty(B)


