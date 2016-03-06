def match(str1,str2):
    for a in str1:
        if a not in str2:
            return False
    return True

t = input()
while(t):
    t -= 1
    str1 = raw_input()
    str2 = raw_input()
    if(len(str1)>len(str2)):
        print "NO"
    elif(len(str1)==len(str2)):
        if(match(str1,str2)):
            print "YES"
        else:
            print "NO"
    else:
        flag = 0
        for a in range(0,len(str2)-len(str1)+1):
            if(match(str1,str2[a:a+len(str1)])):
                flag = 1
                break
        if(flag):
            print "YES"
        else:
            print "NO"
