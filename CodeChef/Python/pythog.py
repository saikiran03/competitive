from math import hypot

def isInt(a):
    if(abs(a-int(a))>0):
        return False
    return True

t = input()
c = 0
for a in xrange(1,t):
    for b in xrange(a+1,t):
        if(c>t):
            break
        else:
            c = hypot(a,b)
            if(isInt(c)):
                print a,b,c
