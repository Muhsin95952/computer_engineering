tic
a = input('Enter an angle: ');
b = input('Enter another angle: ');

disp('We have to prove tan(a + b) = {tan(a) + tan(b)} / 1 - tan(a)*tan(b)\n L.H.S = tan(a + b) = ')
LHS = tan(a + b);
disp(LHS)
disp('Now R.H.S = {tan(a) + tan(b)} / 1 - tan(a)*tan(b) = ')
RHS =  (tan(a) + tan(b))/(1 - tan(a)*tan(b));
disp(RHS)
toc