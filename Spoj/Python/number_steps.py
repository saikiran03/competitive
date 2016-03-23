t = input()
while(t):
    t -= 1
    x,y = map(int,raw_input().split())
    if(x == y):
        if(x%2):
            print (y/2)*4+1
        else:
            print (y/2)*4
    elif(y == (x-2)):
        if(x%2):
            print (y/2)*4+3
        else:
            print (y/2)*4+2
    else:
        print "No Number"
