import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib.animation import FuncAnimation
from matplotlib.colors import Normalize
from matplotlib.cm import ScalarMappable


def f(x):
    return np.sum(x**2)


def grad_f(x):
    return 2 * x


def gradient_descent(start, learning_rate, num_iterations):
    x = start.copy()
    path = [x.copy()]  
    
    for _ in range(num_iterations):
        grad = grad_f(x)
        x -= learning_rate * grad
        path.append(x.copy())
    
    return np.array(path)

start = np.array([3, 3, 3, 3], dtype=np.float64)  
learning_rate = 0.1             # Learning rate
num_iterations = 50             # Number of iterations

path = gradient_descent(start, learning_rate, num_iterations)

losses = np.array([f(point) for point in path])

fig = plt.figure(figsize=(12, 6))
ax1 = fig.add_subplot(121, projection='3d')

x_range = np.linspace(-4, 4, 100)
y_range = np.linspace(-4, 4, 100)
X, Y = np.meshgrid(x_range, y_range)
Z = X**2 + Y**2  


surface = ax1.plot_surface(X, Y, Z, cmap='viridis', alpha=0.6)

ax1.set_xlabel('x1')
ax1.set_ylabel('x2')
ax1.set_zlabel('f(x1, x2)')
ax1.set_title('Gradient Descent on f(x1, x2)')
global_min_line_x = [start[0], 0]
global_min_line_y = [start[1], 0]
global_min_line_z = [f(start), f(np.zeros_like(start))]
ax1.plot(global_min_line_x, global_min_line_y, global_min_line_z, 'b--', label='Path to Global Minimum')

norm = Normalize(vmin=losses.min(), vmax=losses.max())
cmap = plt.cm.viridis  
sm = ScalarMappable(cmap=cmap, norm=norm)
sm.set_array([])
line, = ax1.plot([], [], [], 'r-', lw=2, label='Gradient Descent Path')  
point, = ax1.plot([], [], [], 'ro')  

def update(frame):
    line.set_data(path[:frame, 0], path[:frame, 1])
    line.set_3d_properties(f(path[:frame]))
    point.set_data(path[frame, 0], path[frame, 1])
    point.set_3d_properties(f(path[frame]))
    colors = cmap(norm(losses[:frame]))
    line.set_color(colors)
    
    return line, point
ani = FuncAnimation(fig, update, frames=len(path), interval=200, blit=False)
ax2 = fig.add_subplot(122)
ax2.plot(losses, label='Loss', color='blue')
ax2.set_xlabel('Iteration')
ax2.set_ylabel('Loss')
ax2.set_title('Loss Convergence')
ax2.legend()
ax1.legend()

cbar = fig.colorbar(sm, ax=ax1, pad=0.1)
cbar.set_label('Loss Value')

plt.tight_layout()
plt.show()