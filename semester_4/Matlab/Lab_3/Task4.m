a = input('Enter value to a: ');
if a<1 & a>10
    disp('Sorry, Enter a correct value between 1 to 10.')
elseif a<3
    c = a^2;
elseif a>=3 & a<7
        c = a+3;
else
    c = a;
end
disp(['Value of C = ', num2str(c)])
