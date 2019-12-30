def growup_rate(r, D, x):
    x = r * x - D
    return x

Input = input().split()
r = int(Input[0])
D = int(Input[1])
x = int(Input[2])

for i in range(10):
    x = growup_rate(r, D, x)
    print(int(x))
