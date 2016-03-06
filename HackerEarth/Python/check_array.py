t = input()
while(t):
    t -= 1
    n = input()
    arr = list(map(int,raw_input().split()))
    flag = 1
    suml = 0
    sumr = sum(arr)-arr[0]
    prev = arr[0]
    for a in arr:
        if suml == sumr:
            print "YES"
            print suml,sumr,a
            flag = 0
            break
        else:
            suml += prev
            sumr -= a
            prev = a
    if(flag):
        print "NO"
