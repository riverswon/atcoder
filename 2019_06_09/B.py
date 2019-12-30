N = int(input())
W = input().split()
abs_min = 100000
for i in range(N):
    W[i] = int(W[i])
for i in range(1,N):
    S_1 = sum(W[0:i])
    S_2 = sum(W[i:N])
    x = abs(S_1 - S_2)
    if abs_min > x:
        abs_min = x
print(abs_min)