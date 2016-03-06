players = input()
finance = list(map(int,raw_input().split()))
marketing = list(map(int,raw_input().split()))
finance.sort(reverse=True)
marketing.sort()
flag = 1
score = 0
while(flag):
    if(marketing[0]>finance[0]):
        flag = 0
    else:
        index = 0
        while(marketing[index]<finance[index]):
            startpoint 
            index += 1
            
