t = input()
while(t):
    t -= 1
    colors = raw_input().split()
    case1 = colors[0:2]
    case2 = colors[2:4]
    case3 = colors[4:]
    tempcase1 = list(set(case1).intersection(case2))
    tempcase2 = list(set(tempcase1).intersection(case3))
    if(len(tempcase2)>0):
        print "YES"
    else:
        print "NO"
