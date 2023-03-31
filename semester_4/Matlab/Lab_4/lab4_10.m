[x,y] = meshgrid([-2:.2:2]);
Z = x.*exp(-x.^2-y.^2);
figure
surf(x,y,Z,gradient(Z))
colorbar