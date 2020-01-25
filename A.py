Input = input().split()
A = int(Input[0])
B = int(Input[1])
C = int(Input[2])

if A < C and C < B:
    print('Yes')
elif B < C and C < A:
    print('Yes')
else:
    print('No')