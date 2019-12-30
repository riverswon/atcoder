import numpy as np

def main():
    data = input().split()
    N = int(data[0])
    K = int(data[1])
    a = np.empty(N, int)
    a_str = input().split()
    for i in range(N):
        a[i] = int(a_str[i])
    res = 0
    for left in range(N):
        sum = 0
        right = left
        while 

    

if __name__ == "__main__":
    main()