def numpower(a,b):
    temp = 1
    power = 0
    while(pow(b,power) < a):
        temp = pow(b,power)
        power += 1
    return power-1

def numbase(a,b):
    test,power = numpower(a,b)
    s = [0] * power
    while(power):
        s[test-power] = a/(b**power)
        a = a%(b**power)
        power -= 1
    return s

'''
t = input()
arr = []
while(t):
    t -= 1
    arr.append(input())
for a in arr:
    base = 2
    arr1 = numbase(a,base)
    while(arr1 != arr1[::-1]):
        base += 1
        arr1 = numbase(a,base)
    print base
'''

print numbase(123,2)
print bin(123)
