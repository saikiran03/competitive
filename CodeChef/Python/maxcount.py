t = input()
while t:
    t -= 1
    r = input()
    arr = list(map(int,raw_input().split()))
    arr.sort()
    tmp = arr[0]
    counts = {}
    count = 0
    i = 0
    while i < r:
        if tmp == arr[i]:
            count += 1
        else:
            counts[tmp] = count
            count = 1
            tmp = arr[i]
        i += 1
    m = max(counts)
    n = 0
    for key in counts:
        if counts[key]==m:
            n = key
            break
    print n,m
