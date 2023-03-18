function y = fact(x)
y=1;
    for i=1:1:x
        y = y*i;
    end
disp(['Factorial of the given number ', num2str(x), ' is  = ', num2str(y)])