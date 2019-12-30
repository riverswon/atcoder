def main():
    data = input().split()
    X = int(data[0])
    A = int(data[1])
    if X < A:
        print(0)
    else:
        print(10)

if __name__ == "__main__":
    main()
