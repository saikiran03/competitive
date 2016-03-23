def reqans(x):
    start = 1
    ans = 0
    while(start<=x):
        y = x/start
        ans += start*y
        start += 1
    return ans

n = input()
while(n):
    n -= 1
    x = input()
    print reqans(x)
    
