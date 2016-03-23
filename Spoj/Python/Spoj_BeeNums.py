from math import sqrt
def ans(n):
    t = float(sqrt((4*n-1)/3.0))
    if t==int(t):
        print "Y"
        return "Y"
    else:
        print "N"
        return "N"

pres = {}
t = input()
while t!= -1:
    try:
        print pres[t]
    except:
        pres[t] = ans(t)
    t = input()
