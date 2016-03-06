fib = [1,1]

def nfibo(n):
    curpos = len(fib)-1
    while(curpos<n):
        fib.append(fib[curpos-1]+fib[curpos])
        curpos = len(fib)-1
    return

def nonfibo(n):
    nfibo(n)
    nonfib = set(range(1,max(fib))) - set(fib)
    return list(nonfib)[0:n]

nonfib = nonfibo(10)
print fib
print nonfib
print len(fib)
print len(nonfib)
