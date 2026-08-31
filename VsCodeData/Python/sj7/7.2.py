import matplotlib.pyplot as plt
import numpy as np

plt.rcParams['font.sans-serif'] = ['SimHei']  # 用来正常显示中文标签
plt.rcParams['axes.unicode_minus'] = False    # 用来正常显示负号

# ---参数设置 ---
x0 = 800         # 初始人口
r = 0.015         # 增长率
xm = 3000         # 环境最大容量 (500)
years = 1000       # 预测年数

t_list = np.arange(0, years + 1, 1)
x_malthus = []
x_logistic = []

for t in t_list:
    # 马尔萨斯模型计算
    x_malthus.append(x0 * (1 + r)**t)
    # Logistic模型计算 (解析解公式)
    val = xm / (1 + (xm/x0 - 1) * np.exp(-r * t))
    x_logistic.append(val)

plt.figure(figsize=(10, 6))
plt.plot(t_list, x_malthus, 'r--', label='马尔萨斯模型 (指数增长)')
plt.plot(t_list, x_logistic, 'b-', linewidth=2, label='Logistic模型 (S型曲线)')

plt.axhline(y=xm, color='g', linestyle=':', label=f'最大容量 (xm={xm})')# 绘制最大容量线
plt.ylim(0, 4000)

plt.title(f'人口增长模型对比 (增长率 r={r})', fontsize=16)
plt.xlabel('年份', fontsize=12)
plt.ylabel('人口数量', fontsize=12)
plt.legend(loc='upper left')  # 图例放左上角
plt.grid(True, linestyle='--', alpha=0.6) # 添加网格
plt.show()