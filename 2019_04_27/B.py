import numpy as np

n = input()
v = input().split()
c = input().split()
N = int(n)
V = np.array(v, dtype=int)
C = np.array(c, dtype=int)

max_xy = 0

for i in range(N):
    if V[i] - C[i] > 0:
        max_xy += V[i] - C[i]
print(max_xy)