from math import factorial as f

def ncr(n,r):
    a = max(n-r,r)
    b = min(n-r,r)
    fac = 1
    while n>a:
        fac *= n
        n -= 1
    return fac/f(b)

t = input()
while t:
    t -= 1
    n,r = map(int,raw_input().split())
    print ncr(n-1,r-1)
