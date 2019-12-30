def main():
    S = input()
    frag = 0
    for i in range(len(S)-1):
        if S[i] == S[i+1]:
            frag = 1
    if frag == 1:
        print('Bad')
    else:
        print('Good')

if __name__ == "__main__":
    main()
