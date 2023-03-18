A = input('Enter a vector:  ');
B = input('Enter another vector of the same length: ');
X = A.^2;
Y = B.^2;
lenA = length(A);
lenB = length(B);
i = lenA;
if lenA == lenB
    while i>0
        C(i) = X(i) + Y(i);
        i= i-1;
    end
end
disp(C)