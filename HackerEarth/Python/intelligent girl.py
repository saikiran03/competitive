t = raw_input()
t = list(t)
l = len(t)
evens = 0
arr = []
for a in range(l):
    if(int(t[a]) % 2==0):
        evens += 1
        arr.append(a)
for a in range(l):
    try:
        arr.remove(a-1)
    except:
        pass
    print len(arr),
