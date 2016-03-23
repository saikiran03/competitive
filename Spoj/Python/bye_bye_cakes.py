def subs(arr1,arr2):
    for a in range(len(arr1)):
        arr1[a] = arr1[a]-arr2[a]
    return

userinput = list(map(int,raw_input().split()))
while(userinput[0]+1):
    avail = userinput[0:4]
    req = userinput[4:]
    while(max(avail)>0):
        subs(avail,req)
    for a in avail:
        print abs(a),
    print ''
    userinput = list(map(int,raw_input().split()))
