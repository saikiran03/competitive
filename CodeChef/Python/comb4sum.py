def specialsum(a,b,c,d):
    return abs(a+b-c-d) + abs(a+c-b-d) + abs(a+d-b-c) + abs(c+d-a-b) + abs(b+d-a-c) + abs(b+c-a-d)

t = input()
while(t):
    t -= 1
    n = input()
    a = list(map(int,raw_input().split()))
    s = 0
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            for l in range(j+1,len(a)):
                for r in range(l+1,len(a)):
                    s += specialsum(a[i],a[j],a[l],a[r])
    print s
