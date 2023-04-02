%   Write matlab function zprint, which takes a complex number and returns 
%   it real part, imaginary part, magnitude, phase in radians, and phase in degrees.


function [re, img, length, phase_rad, phase_deg] = zprint_1(z)
re = real(z);
img = imag(z);
length = abs(z);
phase_rad = angle(z);
phase_deg = phase_rad*57.3;
disp(re);
disp(img);
disp(length);
disp(phase_rad);
disp(phase_deg);

end