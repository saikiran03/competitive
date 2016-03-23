import math
t = input()
while(t):
    t -= 1
    co_ords = []
    distances = []
    points = input()
    while(points):
        points -= 1
        x,y = map(float,raw_input().split())
        co_ords.append((x,y))
    for a in co_ords:
        for b in co_ords:
            dist = (a[0]-b[0])**2 +(a[1]-b[1])**2
            dist = math.sqrt(dist)
            distances.append(dist)
    print max(distances)
