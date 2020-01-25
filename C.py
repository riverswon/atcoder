import math
s = input().split()
n = int(s[0])
k = int(s[1])
s = int(s[2])

answer = []
if k == n:
    for i in range(n):
        answer.append(s)
elif k == 0:
    if s > 2:
        for i in range(n):
            answer.append(s-1)
    else:
        for i in range(n):
            answer.append(s+1)
else:
    if s%2 == 0:
        p = int(s / 2)
        for i in range(k+1):
            answer.append(p)
        for i in range(n - (k+1)):
            answer.append(p+100)
    else:
        if s == 1:
            for i in range(k):
                answer.append(1)
            for i in range(n - (k+1)):
                answer.append(2)
        else:
            p = math.ceil(s / 2)
            q = math.floor(s / 2)
            for i in range(k+1):
                if i%2 == 0:
                    answer.append(p)
                else:
                    answer.append(q)
            for i in range(n - (k+1)):
                answer.append(p+100)

result = ' '
for i in answer:
    result += str(i)
    result += ' '
print(result[1:])


