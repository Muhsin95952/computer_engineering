tic
a = input('Enter an angle: ');
b = input('Enter another angle: ');

disp('We have to prove "sin(a + b) = (sin a)(cos b) + (cos a)(sin b)" ' )
disp('L.H.S = sin(a + b) = ')
LHS = sin(a + b);
disp(LHS)
disp('now R.H.S = (sin a)(cosb) + (cos a)(sin b) = ')
RHS = (sin(a))*(cos(b)) + (cos(a))*(sin(b));
disp(RHS)
toc




