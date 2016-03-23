t = input()
while(t):
    t -= 1
    a,b = map(int,raw_input().split())
    if(b ==0):
        print 0
    else:
        a = a%10
        b = b%4
        if(b == 0):
            b = 4
        print pow(a,b)%10
        
