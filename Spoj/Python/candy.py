s = input()
arr = []
while(s != -1):
    arr.append(s)
    s = input()
arr.sort()
avg = sum(arr)/len(arr)
changes = 0
if(sum(arr)%len(arr)):
    flag = 1
arr = filter(lambda x: x<avg, arr)
for a in arr:
    changes += avg-a
print changes
if(flag):
    print -1
