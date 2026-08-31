import numpy as np
from scipy.integrate import odeint
import matplotlib.pyplot as plt

ratio = 2
# 1. y 是一个包含两个元素的数组，y[0] 代表位置 y，y[1] 代表斜率 y′
def missile_equation(y, x):
    dydx = y[1]
    d2ydx2 = np.sqrt(1 + y[1]**2) / ratio/ (1 - x)
    return [dydx, d2ydx2]

# 2. 设置自变量 x 的范围 (从 0 到 0.9999，无限逼近 1，防止分母为 0)
x = np.arange(0, 0.9999, 0.0001)

# 3. 设置初值条件并调用 odeint 求解
# 初值 [y(0), y'(0)] = [0, 0]，即从原点水平发射
y = odeint(missile_equation, [0, 0], x)
print(y)
# 4. 提取击中时的距离（取轨迹上最后一个点的 y 值）
hit_distance = y[-1 , 0]

# 5. 打印结果
print(f"通过 Python 数值求解，乙舰被击中时行驶的距离约为: {hit_distance:.4f}")

# 6. 绘制导弹轨迹图
plt.figure(figsize=(8, 6))
plt.rcParams['font.sans-serif'] = ['SimHei']  # 正常显示中文
plt.plot(x, y[:, 0], label='导弹运行曲线', color='red')
plt.plot([1, 1], [0, hit_distance], '--k', label='乙舰路径 (x=1)')
plt.scatter([1], [hit_distance], color='black')  # 标记击中点

plt.title('导弹追踪问题数值求解结果')
plt.xlabel('x (水平距离)')
plt.ylabel('y (垂直距离)')
plt.legend()
plt.grid(True, linestyle='--', alpha=0.7)
plt.xlim(0, 1.2)
plt.ylim(0, max(0.3, hit_distance + 0.1))
plt.show()