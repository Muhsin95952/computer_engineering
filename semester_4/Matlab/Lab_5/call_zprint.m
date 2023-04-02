% Here are Calling of functions zprint_1, zprint_2 and zprint_4. 

z = input('Enter a complex number:  ');
y = input('Enter a complex number:  ');
[re, img, length, phase_rad, phase_deg] = zprint_1(z);
disp('');
disp('');
[conjugate, inverse] = zprint_2(z);
disp('');
disp('');
[multiply, divid] = zprint_4(z, y);