tc = input()
while tc:
    tc -= 1
    m,n = raw_input().split()
    alp = [0]*26
    blp = [0]*26
    flag1,flag2 = 1,1
    for a in m:
        alp[ord(a)-97]+=1
    for a in n:
        blp[ord(a)-97]+=1
    for i in xrange(26):
        if(alp[i]>blp[i]):
            flag1=0
            break
    for i in xrange(26):
        if(blp[i]>alp[i]):
            flag2=0
            break
    if(flag1 or flag2):
        print "YES"
    else:
        print "NO"
