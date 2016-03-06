def suminv(n):
    tmp = 0
    for a in range(1,n+1):
        tmp += 1.0/(a+1)
    return tmp

frac = input()
while(frac):
    n = 1
    while(suminv(n)<frac):
        n += 1
    print str(n) + ' card(s)'
    frac = input()
