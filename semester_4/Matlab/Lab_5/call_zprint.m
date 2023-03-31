z = input('Enter a complex number:  ');
y = input('Enter a complex number:  ');
[re, img, length, phase_rad, phase_deg] = zprint(z);
disp('');
disp('');
[conjugate, inverse] = zprint_2(z);
disp('');
disp('');
[multiply, divid] = zprint_3(z, y);