def main():
    N = int(input())
    a = input().split()
    b = input().split()
    g_a = int(a[0])
    s_a = int(a[1])
    b_a = int(a[2])
    g_b = int(b[0])
    s_b = int(b[1])
    b_b = int(b[2])
    if g_a > g_b and s_a > s_b and b_a > b_b:
        print(N)
        return
    if g_a < g_b and s_a > s_b and b_a > b_b:
        x = g_b - g_a
        print(int(N*x))
        return
    if g_a > g_b and s_a < s_b and b_a > b_b:
        x = s_b - s_a
        print(int(N*x))
        return
    if g_a > g_b and s_a > s_b and b_a < b_b:
        x = b_b - b_a
        print(int(N*x))
        return
    

if __name__ == "__main__":
    main()
