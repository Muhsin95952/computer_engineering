tic
a = input('Enter an angle: ');
b = input('Enter another angle: ');

disp('We have to prove cos(a) - cos(b) = (-2)*sin((a+b)/2)*sin((a-b)/ 2)')
disp(' L.H.S = cos(a) - cos(b)')
LHS  = cos(a) - cos(b);
disp(LHS)
disp('R.H.S = (-2)*sin((a+b)/2)*sin((a-b)/ 2)')
RHS = (-2)*sin((a+b)/2)*sin((a-b)/ 2);
disp(RHS)
toc