%   Compute the conjugate ? (i.e. z_conj *give variable name+) 
%   and the inverse 1/z (i.e. z_inv *give variable name]) for any 
%   complex number z. Display the results numerically with zprint.

function [conjugate, inverse] = zprint_2(z)
conjugate = conj(z);
inverse = 1/z;

disp('Conjugate of the given complex number is: ');
disp(conjugate);
disp('Inverse of the given complex number is: ');
disp(inverse);

end