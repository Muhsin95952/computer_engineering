A = input('Enter a Discrete time signal in the form of array: ');
lenA = length(A);
z = 0;
y = 0;
%w = 0;   %in between +3 and -3
for i=1:1:lenA
    if A(i) > 3
        z = z + 1;
    elseif A(i) < -3
        y = y + 1;
    end
   
end 
 disp('Number of samples whose Amplitude is greater than threshold 3 are: ');
 disp(z);
 
 disp('Number of samples whose Amplitude is less than threshold -3 are: ');
 disp(y);
 