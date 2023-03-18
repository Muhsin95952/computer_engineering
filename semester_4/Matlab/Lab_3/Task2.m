x = [-3 0 0 2 6 8];
y = [-5 -2 0 3 4 10];
%find(x>y)
for i = 1 : 6
    if x(i)>y(i)
        disp(x(i))
    end
   end