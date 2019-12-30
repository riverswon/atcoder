Input = input().split()
N = int(Input[0])
K = int(Input[1])
S = list(input())

if S[K-1] == 'A':
    S[K-1] = 'a'
elif S[K-1] == 'B':
    S[K-1] = 'b'
else:
    S[K-1] = 'c'

S = "".join(S)

print(S)