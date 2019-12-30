def main():
    S = input()
    frag = [0] * 4
    for i in range(len(S)):
        for j in range(len(S)):
            if S[i] == S[j]:
                frag[i] += 1
    fragp = 0
    for i in range(len(frag)):
        if frag[i] != 2:
            fragp = 1
    if fragp == 0:
        print('Yes')
    else:
        print('No')

if __name__ == "__main__":
    main()
