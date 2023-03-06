tic
a = input('Enter an angle: ');
b = input('Enter another angle: ');

disp('We have to prove sin(a) + sin(b) = 2(sin((a+b)/2))*(cos((a-b)/2))')
disp('L.H.S = sin(a) + sin(b)')
LHS = sin(a) + sin(b);
disp(LHS)
disp('R.H.S = 2(sin((a+b)/2))*(cos((a-b)/2))')
RHS = 2*(sin((a+b)/2))*(cos((a-b)/2));
disp(RHS)
toc