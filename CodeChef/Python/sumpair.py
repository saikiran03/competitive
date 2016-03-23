t = input()
while(t):
    t -= 1
    n,d = map(int,raw_input().split())
    arr = list(map(int,raw_input().split()))
    arr.sort(reverse=True)
    s = 0
    for a in range(n):
        for b in range(a+1,n):
            if arr[b]-arr[a] < d:
                s += (arr[b]+arr[a])
                print a,b,arr[a],arr[b]
                arr[a] = 0
                arr[b] = 0
            else:
                break
    print s
