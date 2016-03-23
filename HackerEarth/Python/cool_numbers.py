def find101(x):
    count = 0
    for a in range(len(x)-2):
        if x[a:a+3] == '101':
            count += 1
    return count

t = input()
while(t):
    t -= 1
    r,k = map(int,raw_input().split())
    count = 0
    for a in range(1,r+1):
        a = bin(a)[2:]
        if find101(a)>k:
            count += 1
    print count
