import math
def poly(val):
    return a*val*val+b*val+(c-k)

t = input()
while(t):
    t-=1
    a,b,c,k = map(int,raw_input().split())
    point = 0
    while(poly(point)<0):
        point+=1
    print point
