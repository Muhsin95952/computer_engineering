clear
clear all

% task 6.2: Write MATLABcode to convert the state space representation to the transfer function 
A = [-4 -1.5; 4 0];
B = [2; 0];
C = [1.5 0.625];
D = 0;

[num, denum ]= ss2tf(A, B, C, D)

%% task 6.3: Write MATLABcode to Covert transfer function to the state space representation

num = [0 0 0 8 10];
dnum = [1 5 1 5 13];

[A, B, C, D] = tf2ss(num, dnum)

%% Task 6.4: Write MATLABcode to Covert transfer function to the state space representation
num = [0 1 2 12 7 6];
dnum = [1 9 13 8 0 0]

[A, B, C, D] = tf2ss(num, dnum)

%% task 6.5: Write MATLABcode to convert the state space representation to the transfer function 

A = [0 1 5 0; 0 0 1 0; 0 0 0 1; -7 -9 -2 -3];
B = [0; 5; 8; 2];
C = [1 3 6 6];
D = 0;

[num, denum ]= ss2tf(A, B, C, D)

%% task 6.6: Write MATLABcode to convert the state space representation to the transfer function 

A = [3 1 0 4 -2; 
    -3 5 -5 2 -1;
    0 1 -1 2 8;
    -7 6 -3 -4 0;
    -6 0 4 -3 1];
B = [2; 7; 8; 5; 4];
C = [1 -2 -9 7 6];
D = 0;

% [num, denum ]= ss2tf(A, B, C, D)

t = ss(A, B, C, D);
t = tf(t)
