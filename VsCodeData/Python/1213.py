import matplotlib.pyplot as plt
import numpy as np

theta = np.linspace(0, 2 * np.pi, 1000)

x = 16 * np.sin(theta) ** 3
y = 13 * np.cos(theta) - 5 * np.cos(2 * theta) - 2 * np.cos(3 * theta) - np.cos(4 * theta)

plt.figure(figsize=(6, 6))
plt.plot(x, y, color='red', linewidth=3)
plt.fill(x, y, color='pink', alpha=0.6)
plt.axis('equal') 
plt.axis('off')     
plt.title('爱心', fontsize=16)
plt.show()