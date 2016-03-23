t = input()
dimension = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
while(t):
    t -= 1
    s1,s2,d = map(str,raw_input().split())
    d = int(d)
    coord1 = []
    coord2 = []
    for a in dimension:
        coord1.append(s1.count(a))
        coord2.append(s2.count(a))
    man_dist = 0
    for a in range(26):
        man_dist += abs(coord1[a]-coord2[a])
    if(man_dist<=d):
        print "YES"
    else:
        print "NO"
