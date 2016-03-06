def substrings(string):
    subs = []
    for a in range(len(string)+1):
        for b in range(a):
            subs.append(string[b:a])
    return subs

def diffrk(string):
    return string.count('r')-string.count('k')

t = raw_input()
arr = substrings(t)
for a in arr:
    print a,diffrk(a)
            
