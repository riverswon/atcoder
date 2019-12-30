Input = input().split()
A = int(Input[0])
B = int(Input[1])

if A >= 13:
    print(B)
elif 6 <= A <= 12:
    print(int(B/2))
else:
    print(0)