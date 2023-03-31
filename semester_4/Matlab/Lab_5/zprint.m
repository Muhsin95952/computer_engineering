function [re, img, length, phase_rad, phase_deg] = zprint(z)
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