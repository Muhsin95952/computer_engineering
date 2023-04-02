%   Take two complex numbers and compute z1z2 and z1/z2. 
%   Use zprint to display the results numerically.


function [multiply, divid] = zprint_4(z, y)
multiply = z*y;
divid = z/y;

disp('Multiplication of the given complex numbersa is: ');
disp(multiply);
disp('Division of the given complex number is: ');
disp(divid);

end