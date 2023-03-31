function [conjugate, inverse] = zprint_2(z)
conjugate = conj(z);
inverse = 1/z;

disp('Conjugate of the given complex number is: ');
disp(conjugate);
disp('Inverse of the given complex number is: ');
disp(inverse);

end