S = input()
A = int(S[0:2])
B = int(S[2:4])
if (1 <= A <= 12) and (1 <= B <= 12):
    print("AMBIGUOUS")
elif (not 1 <= A <= 12) and(not 1 <= B <= 12):
    print("NA")
elif (1 <= A <= 12) and (not 1 <= B <= 12):
    print("MMYY")
else:
    print("YYMM")
