def pal_check(x):
    s = str(x)
    return s == s[::-1]

t = input()
while(t):
    t -= 1
    min_num = input() + 1
    while(not pal_check(min_num)):
        min_num += 1
    print min_num
