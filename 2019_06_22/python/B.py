def main():
    N, L = map(int, input().split())
    apple = [i+L for i in range(N)]
    if L >= 0:
        apple = apple[1:]
        print(sum(apple))
    elif 0 in apple:
        print(sum(apple))
    else:
        apple = apple[:N-1]
        print(sum(apple))

if __name__ == "__main__":
    main()
