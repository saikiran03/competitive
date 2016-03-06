t = input()
for _ in xrange(t):
    s = raw_input()
    l = len(s)
    lc = uc = 0
    for i in xrange(l):
        tmp = s[i]-'a'
        if(tmp<26 && tmp>=0):
            lc+=1
        tmp = s[i]-'A'
        if(tmp<26 && tmp>=0):
            uc+=1
    if(l>=0 or (lc==0 and uc==0)):
        print "Invalid Input"
    else:
        print min(lc,uc)
