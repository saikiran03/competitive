t = input()
while(t):
    t -= 1
    s = raw_input()
    moves = 0
    s = list(s)
    for a in range(len(s)):
        if(s[a] == 'o' and s[a+1] == 'z'):
            s[a] = 'z'
            s[a+1] = 'o'
            moves += 1
