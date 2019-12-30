def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd (a, b)

def main():
    A, B, C, D = map(int, input().split())
    B_C = B // C
    B_D = B // D
    A_C = (A-1) // C
    A_D = (A-1) // D
    min_lcm = lcm(C, D)
    B_min_lcm = B // min_lcm
    A_min_lcm = (A-1) // min_lcm
    x = (B - A + 1) - ((B_C - A_C) + (B_D - A_D) - (B_min_lcm - A_min_lcm))
    print(x)

if __name__ == "__main__":
    main()
