def zero_count(x):
    return len(str(x))-len(str(x).strip('0'))

def magic_number(x):
    x = str(x)
    if(x.count('4') == 0):
        return '4'*(len(x)+1)
    elif(
        
    x = str(x)
    if(x.count('4')):
        #convert last 4 to a 7
        l = list(x)
        l[x.rfind('4')] = '7'
        x = ''.join(l)
    else:
        #add a 4 at the start and convert all to 4
        x = '4'*(len(x)+1)
    return int(x)

x = 4
for a in range(10):
    print magic_number(x)
    x = magic_number(x)

'''
n = input()
array = list(int,raw_input().split())
'''
