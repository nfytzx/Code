import cvxpy as cp
from numpy import array
c=array([70,50,60])
a=array([[2,4,3],[3,1,5],[7,3,5]])
b=array([150,160,200])
x=cp.Variable(3,pos=True)
obj=cp.Maximize(c@x)
cons=[a@x<=b]
prob=cp.Problem(obj,cons)
prob.solve()
print('最优解',x.value)
print('最优值',prob.value)