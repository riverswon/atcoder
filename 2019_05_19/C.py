import math
Input = input().split()
N = float(Input[0])
K = float(Input[1])

result = float(0)
p = float(1/N)
i = 0

if N >= K:
    result = result + (N - K + 1) * p
    N = K - 1

while K > 1:
    K = K / 2
    x = float(math.ceil(K))
    i += 1
    if N >= x:
        q = 0.5**i
        result = result + (N - x + 1) * q * p
        N = x - 1

print(result)