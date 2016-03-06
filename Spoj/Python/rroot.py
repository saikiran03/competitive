import math

t = input()
while(t):
    t -= 1
    a = input()
    i = int(math.sqrt(a))
    tot = 0
    for j in range(i+1):
        tot += 2*j*j + 1
    tot += (a-i)*(a+1)
    print tot
