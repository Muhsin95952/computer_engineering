x1 = [2 5 8 4 3];
x2 = [4 3 2 0 0];
disp('Vector addition: ')

y = x1 + x2

x3 = [4 3 2 1 1];
disp('Vector Multiplication: ')
y1 = x1 .* x3

disp('Vector Addition and Multiplication usin for loop\n Addition: ')

for (i=1:1:5)
    x1(i) + x2(i)
end

disp('Multiplication: ')
for (i=1:1:5)
    x1(i) .* x3(i)
end

