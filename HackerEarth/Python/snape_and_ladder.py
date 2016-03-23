import math
t = input()
while(t):
    t-=1
    b,ls = map(float,raw_input().split())
    rsmin = math.sqrt(ls**2 - b**2)
    rsmax = math.hypot(b,ls)
    print rsmin,rsmax
