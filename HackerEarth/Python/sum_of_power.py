def isexpo(x):
    import math
    if(x in [0,1]):
        return True
    base = 2
    power = 1
    order = 0
    while(base <= int(math.sqrt(x))+1):
        res = base**power
        while(res <= x):
            if(res==x):
                return True
            order += 1
            power += 1
            res = base**power
        base += 1
        power = 1
    return False

t = input()
while(t):
    t -= 1
    num = input()
    start = 0
    flag = 1
    while(start<=int(num/2)+1):
        if(isexpo(start) and isexpo(num-start)):
            print "Yes"
            flag = 0
            break
        start += 1
    if(flag):
        print "No"
