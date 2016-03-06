idea_count, rand_num = map(int,raw_input().split())
arr = range(1,idea_count+1)
curr_pos = rand_num
loop = 0
while(len(arr)>1):
    loop += 1
    print arr
    arr.pop(curr_pos%len(arr)-loop)
    print arr
    curr_pos += rand_num 
print arr[0]
