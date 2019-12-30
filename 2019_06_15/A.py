def main():
    data = input().split()
    N = int(data[0])
    K = int(data[1])
    if K == 1:
        print(0)
        return
    print(N-K)

if __name__ == "__main__":
    main()
