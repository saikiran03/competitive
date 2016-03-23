tc = input()
for a in xrange(tc):
    size, n = map(int,raw_input().split())
    arr = sorted(list(map(int,raw_input().split())))
    print sum(arr[n:])-sum(arr[:n])
