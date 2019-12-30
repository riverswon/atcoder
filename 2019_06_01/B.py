N = input()
num = 0
for i in N:
    if i == 'x':
        num += 1
if num >= 8:
    print('NO')
else:
    print('YES')
