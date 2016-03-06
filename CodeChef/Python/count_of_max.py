t = input()
while(t):
    t -= 1
    size = input()
    arr = list(map(int,raw_input().split()))
    lis = list(set(arr))
    cou = []
    for a in lis:
        cou.append(arr.count(a))
    i = max(cou)
    j = lis[cou.index(i)]
    print i,j
