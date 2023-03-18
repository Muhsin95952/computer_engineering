function fib = fibo(N)
num1 = 0;
num2 = 1;
if N < 0
    disp('! ERROR !')
elseif N == 0
    disp(0)
elseif N == 1
    disp(1)
else
    for i=1:1:N
        num = num1 + num2;
        num1 = num2;
        num2 = num;
    end 
end
disp(num)
        