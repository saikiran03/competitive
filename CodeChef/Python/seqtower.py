from itertools import permutations

def fun(x):
    if len(x)==1:
        return x[0]
    s = x[1:]
    return pow(x[0],fun(s))

t = input()
while(t):
    t -= 1
    n,m = map(int,raw_input().split())
    arr = list(map(int,raw_input().split()))
    comb = list(permutations(arr))
    sumd = 0
    for a in comb:
        sumd += fun(a)
    print sumd%m
