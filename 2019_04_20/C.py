N = int(input())
input_S = input()
S = list(input_S)

all_black = 0
all_white = 0
half = 0

for i in S:
    if i == '.':
        all_black += 1

for i in S:
    if i == '#':
        all_white += 1
        
for i in range(N-1):
    half_count = 0
    for j in S[:i+1]:
        if j == '.':
            half_count += 1
    for j in S[i+1]:
        if j == '#':
            half_count += 1
    if half_count > half:
        half = half_count

if all_white < all_black and all_white < half:
    print(int(all_white))
elif all_black < all_white and all_black < half:
    print(int(all_black))
else:
    print(int(half))


