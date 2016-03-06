t = input()
dom = list(map(int,raw_input().split()))
brian = list(map(int,raw_input().split()))
max1,max2 = 0,0
for a in range(t-1):
    diff = abs(dom[a]-dom[a+1])
    if(max1 < diff):
        max1 = diff
for b in range(t-1):
    diff = abs(brian[b]-brian[b+1])
    if(max2 < diff):
        max2 = diff
if(max1 < max2):
    #some code
    print "Dom"
    print max1
else:
    #other code
    print "Brian"
    print max2 
