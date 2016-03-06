def print_arr(arr):
    for a in arr:
        print a,
    print ""
    return

t = input()
while(t):
    t -= 1
    n,m = map(int,raw_input().split())
    works = range(1,n+1)
    done = list(map(int,raw_input().split()))
    for work in done:
        try:
            works.remove(work)
        except:
            print "Unable to find ",work
    works.sort()
    chef = works[::2]
    assist = works[1::2]
    print_arr(chef)
    print_arr(assist)
    
