data = input().split()
s = input()
end_max = int(max(data[3:5]))
s = s[int(data[1])-1:end_max]

if '##' in s:
    print('No')
else:
    if int(data[3]) < int(data[4]):
        print('Yes')
    else:
        s = s[int(data[2])-2:int(data[4])+1]
        if '...' in s:
            print('Yes')
        else:
            print('No')
