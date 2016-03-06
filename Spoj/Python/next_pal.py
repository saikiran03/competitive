def pal_check(x):
    s = str(x)
    return s == s[::-1]

t = input()
while(t):
    t -= 1
    min_num = input()
    if(len(str(min_num))%2):
        part1 = str(min_num)[0:len(str(min_num))/2]
        part2 = str(min_num)[len(str(min_num))/2+1:]
        mid = str(min_num)[len(str(min_num))/2]
        mid = int(mid)
        if(int(part1[::-1])<int(part2)):
            mid += 1
            if(mid == 10):
                part1 = str(int(part1)+1)
            part2 = part1[::-1]
        elif(int(part1[::-1])>int(part2)):
            part2 = part1[::-1]
        else:
            if(mid==9):
                part1 = str(int(part1)+1)
                part2 = part[::-1]
                mid = 0
            else:
                mid += 1
        pal = part1+str(mid)+part2
        print int(pal)
    else:
        part1 = str(min_num)[0:len(str(min_num))/2]
        part2 = str(min_num)[len(str(min_num))/2:]
        if(int(part1[::-1])<int(part2)):
            part1 = str(int(part1)+1)
            part2 = part1[::-1]
        elif(int(part1[::-1])>int(part2)):
            part2 = part1[::-1]
        else:
            min_num += 1
        pal = part1 + part2
        print int(pal)
