def main():
    data = input().split()
    N = int(data[0])
    X = int(data[1])
    L = input().split()
    num = 1
    D = 0
    for i in range(N):
        D += int(L[i])
        if D <= X:
            num += 1
        else:
            break
    print(num)

if __name__ == "__main__":
    main()
