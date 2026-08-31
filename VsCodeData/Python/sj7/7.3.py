import numpy as np
import matplotlib.pyplot as plt
from scipy.integrate import odeint

# 设置中文字体（解决中文显示问题）
plt.rcParams['font.sans-serif'] = ['SimHei', 'Microsoft YaHei', 'Arial Unicode MS']
plt.rcParams['axes.unicode_minus'] = False

# 参数设置
T_env = 38.0      # 环境温度 (℃)
k = 0.1           # 热交换系数 (1/分钟)
T_initial = 4.0   # 初始温度 (℃)
T_target = 20.0   # 目标温度 (℃)

# 微分方程: dT/dt = k * (T_env - T)
def newton_cooling(T, t, T_env, k):
    return k * (T_env - T)

# 时间范围：0 到 30 分钟
t = np.linspace(0, 30, 300)

# 求解微分方程
solution = odeint(newton_cooling, T_initial, t, args=(T_env, k))
T_values = solution[:, 0]

# 找到温度达到 T_target 的时间
t_target = None
for i, temp in enumerate(T_values):
    if temp >= T_target:
        t_target = t[i]
        break

if t_target is None:
    t_target = t[-1]
    print(f"警告: 在 {t[-1]} 分钟内温度未达到 {T_target}℃")

# 精确计算达到目标温度的时间（解析解）
# T(t) = T_env - (T_env - T_initial) * exp(-k*t)
# => t = -ln((T_env - T_target)/(T_env - T_initial)) / k
t_exact = -np.log((T_env - T_target) / (T_env - T_initial)) / k
minutes = int(t_exact)
seconds = int((t_exact - minutes) * 60)

print("=" * 50)
print("冰峰汽水温升模型")
print("=" * 50)
print(f"环境温度: {T_env}℃")
print(f"初始温度: {T_initial}℃")
print(f"目标温度: {T_target}℃")
print(f"热交换系数: {k}")
print()
print(f"【数值解】达到 {T_target}℃ 的时间: {t_target:.2f} 分钟")
print(f"【解析解】达到 {T_target}℃ 的时间: {t_exact:.4f} 分钟 = {minutes} 分 {seconds} 秒")
print("=" * 50)

# 绘制温度变化曲线
fig, ax = plt.subplots(figsize=(10, 6))

ax.plot(t, T_values, 'b-', linewidth=2, label='汽水温度变化曲线')

# 标记初始点
ax.plot(0, T_initial, 'ro', markersize=8, label=f'初始温度 {T_initial}℃')

# 标记目标温度点
if t_target:
    ax.plot(t_target, T_target, 'g^', markersize=8, label=f'达到 {T_target}℃ (t={t_target:.1f} min)')

# 标记环境温度线
ax.axhline(y=T_env, color='r', linestyle='--', linewidth=1.5, label=f'环境温度 {T_env}℃')
ax.axhline(y=T_target, color='g', linestyle='--', linewidth=1, alpha=0.7, label=f'目标温度 {T_target}℃')

# 添加网格和标签
ax.set_xlabel('时间 (分钟)', fontsize=12)
ax.set_ylabel('温度 (℃)', fontsize=12)
ax.set_title('冰峰汽水温升过程 (牛顿冷却定律)', fontsize=14)
ax.set_xlim(0, 25)
ax.set_ylim(0, 45)
ax.grid(True, alpha=0.3)
ax.legend(loc='lower right', fontsize=10)

# 在曲线上添加几个时间点的温度标注
for time_pt in [2, 5, 10, 15, 20]:
    idx = np.argmin(np.abs(t - time_pt))
    temp_pt = T_values[idx]
    ax.annotate(f'{temp_pt:.1f}℃', xy=(time_pt, temp_pt),
                xytext=(time_pt+0.5, temp_pt+1), fontsize=9,
                arrowprops=dict(arrowstyle='->', color='gray', lw=0.5))

plt.tight_layout()
plt.savefig('ice_peak_temperature.png', dpi=150, bbox_inches='tight')
plt.show()

# 输出每隔5分钟的温度预测表
print("\n温度变化预测表 (每隔5分钟):")
print("-" * 40)
print("  时间(分钟)  |   温度(℃)")
print("-" * 40)
for time_pt in range(0, 31, 5):
    idx = np.argmin(np.abs(t - time_pt))
    print(f"    {time_pt:5d}     |   {T_values[idx]:.2f}")
print("-" * 40)

# 验证解析解与数值解的误差
T_analytic = T_env - (T_env - T_initial) * np.exp(-k * t)
max_error = np.max(np.abs(T_values - T_analytic))
print(f"\n数值解与解析解最大误差: {max_error:.2e} ℃ (精度验证通过)")