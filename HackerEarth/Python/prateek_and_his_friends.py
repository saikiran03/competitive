def check_status(value,index,x):
    while x>0:
        try:
            x -= value[index]
        except:
            return False
        index += 1
    return x == 0

t = input()
while(t):
    t -= 1
    n,x = map(int,raw_input().split())
    values =[]
    for a in range(n):
        values.append(input())
    index = 0
    while index<len(values):
        if(check_status(values,index,x)):
            print "YES"
            break
        index += 1
        
    
    
