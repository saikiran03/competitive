def no_of_shortest_paths((x1,y1),(x2,y2)):
    from math import factorial
    f = factorial
    w = abs(x2-x1)
    h = abs(y2-y1)
    return f(w+h)/(f(w)*f(h))

t = input()
while(t):
    t -= 1
    w,h,n = map(int,raw_input().split())
    intersections = []
    while(n):
        n -= 1
        x,y = map(int,raw_input().split())
        intersections.append((x,y))
    total_ways = no_of_shortest_paths((0,0),(w,h))
    cons_ways = 0
    for a in intersections:
        cons_ways += no_of_shortest_paths((0,0),a) * no_of_shortest_paths(a,(w,h))
    print total_ways - cons_ways
        
