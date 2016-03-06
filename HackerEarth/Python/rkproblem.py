def countr(subs):
    return subs.count('R')

def countk(subs):
    return subs.count('K')

def diffrk(subs):
    return countr(subs)- countk(subs)

def subst(string):
    arr = []
    for a in range(len(string)):
        for b in range(a+1,len(string)+1):
            arr.append(string[a:b])
    return arr

string = raw_input()
print subst(string)
