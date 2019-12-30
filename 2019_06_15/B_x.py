import numpy as np

def main():
    N = int(input())
    if N == 1:
        print(1)
        return
    ball = np.empty((N,2), int)
    for i in range(N):
        s = input().split()
        x = int(s[0])
        y = int(s[1])
        ball[i][0] = x
        ball[i][1] = y
    diffs = []
    for i in range(N-1):
        for j in range(i+1, N):
            x_diff = ball[i][0] - ball[j][0]
            y_diff = ball[i][1] - ball[j][1]
            ball_diff = [x_diff, y_diff]
            diffs.append(ball_diff)
    count_num = 0
    for diff in diffs:
        num = diffs.count(diff)
        if num > count_num:
            count_num = num
    print(N - count_num)

if __name__ == "__main__":
    main()
