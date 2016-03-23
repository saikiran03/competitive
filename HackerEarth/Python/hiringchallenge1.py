def match(a,b):
    diff = 0
    for i in range(len(a)):
        if a[i]!=b[i]:
            diff += 1
    return diff

def testinput(x):
    carr = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'y', 'z']
    for a in carr:
        if a in x:
            return True
    return False

t = input()
while(t):
    test = raw_input()
    if(testinput(test)):
        print min(match(test,test.upper()),match(test,test.lower()))
    else:
        print "Invalid Input"
    
