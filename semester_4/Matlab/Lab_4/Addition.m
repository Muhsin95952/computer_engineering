function add = Addition(A, B)
   subplot(3, 1, 1)
    stem(A, 'filled'); title('Signal A');
    subplot(3, 1, 2)
   stem(B, 'filled'); title('Signal B');
        add = A + B;
   subplot(3, 1, 3)     
   stem(add, 'filled'); title('Resultant');     
end