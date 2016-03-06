t = input()
while(t):
    t -= 1
    m,x,y = map(int,raw_input().split())
    cop = list(map(int,raw_input().split()))
    houses = [True] * 100
    for a in cop:
        if a>x*y:
            houses[a-(x*y)-1:a+(x*y)] = [False] * (2*x*y+1)
        else:
            houses[0:a+(x*y)] = [False] * (a + x*y)
    print houses.count(True)
