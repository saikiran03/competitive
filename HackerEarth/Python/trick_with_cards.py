t = input()
while(t):
    t -= 1
    n = input()
    count = 0
    if n <=3:
        count = 1
    else:
        if(n%3==0):
            count = n/3
        else:
            count = n
    print count
