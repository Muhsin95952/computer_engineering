function prod = Multiplication(A, x)
subplot(2, 1, 1)    
    stem(A, 'filled'); title('Before Multiply'); 
    prod = A * x;
    subplot(2, 1, 2)
    stem(prod, 'filled'); title('Resultant');
end