def main():
    n = int(input())
    p = input().split()
    frag = 0
    for i in range(1, len(p)-1):
        a = []
        a.append(int(p[i-1]))
        a.append(int(p[i]))
        a.append(int(p[i+1]))
        if max(a) == a[1]:
            continue
        elif min(a) == a[1]:
            continue
        else:
            frag += 1
    print(frag)

if __name__ == "__main__":
    main()
