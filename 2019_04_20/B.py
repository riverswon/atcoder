N = int(input())
S = input()
K = int(input())

key = S[K - 1]
result = 'a'

for i in range(N):
    if S[i] == key:
        result += S[i]
    elif S[i] != key:
        result += '*'
        

print(result[1:])