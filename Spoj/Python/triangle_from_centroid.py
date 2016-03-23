import math
n = input()
while(n):
    n -= 1
    a,ga,gb,gc = map(float,raw_input().split())
    b = a*ga/gb
    c = a*ga/gc
    s = (a+b+c)/2.0
    area = math.sqrt(s*(s-a)*(s-b)*(s-c))
    R = (a*b*c)/(4*math.sqrt(s*(a+b-s)*(a+c-s)*(b+c-s)))
    print R
    gh = math.sqrt(4*R*R - (4/9.0)*(a**2 + b**2 + c**2))
    print area,gh
    
