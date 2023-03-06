tic
a = input('Enter an angle: ');
b = input('Enter another angle: ');

disp('Now we have to prove "cos(a + b) = cos(a)cos(b) - sin(a)sin(b)"\n L.H.S = cos(a + b) = ')
LHS  = cos(a + b);
disp(LHS)
disp('Now R.H.S = cos(a)cos(b) - sin(a)sin(b) = ')
RHS = cos(a)*cos(b) - sin(a)*sin(b);
disp(RHS)
toc