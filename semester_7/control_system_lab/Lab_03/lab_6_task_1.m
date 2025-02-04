G1 = tf([1], [1 1]);
G2 = tf([1], [1 4]);
G3 = tf([1 3], [1 5]);

G_I = series(G1, G2);
G_F = series(G_I, G3);


A = series(G1, G2);
B = parallel(A, G3);

C = series(B, G3);

E = parallel(G1, G2);
G = series(E, G3);

F_final = feedback(C, G);
step(F_final)


