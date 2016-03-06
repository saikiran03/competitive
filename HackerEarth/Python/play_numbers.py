t = input()
while(t):
    t -= 1
    m,n,z = map(int,raw_input().split())
    x = range(1,m+1)
    y = range(1,n+1)
    count = 0
    if(m>n):
        for a in y:
            res = float(z)/a
            if res in x:
                count += 1
    else:
        for a in x:
            res = float(z)/a
            if res in y:
                count += 1
    print count
