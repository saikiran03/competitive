def isPal(x):
    return x == x[::-1]

t = input()
while(t):
    t -= 1
    string = raw_input()
    count = 0
    for a in range(len(string)):
        for b in range(a+1,len(string)+1):
            if(isPal(string[a:b])):
                count += 1
    print count
