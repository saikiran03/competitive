def primes(n):
    ps, sieve = [], [True] * (n + 1)
    for p in range(2, n + 1):
        if sieve[p]:
           ps.append(p)
           for i in range(p * p, n + 1, p):
               sieve[i] = False
    return ps

def factor(z):
    start = 0
    lis = []
    while(z-1):
        while(z%prime[start]==0):
            z /= prime[start]
            lis.append(prime[start])
        start += 1
    return lis

def sum_of_digit(number):
    sod = 0
    while(number):
        sod += number%10
        number /= 10
    return sod

t = input()
while(t):
    t -= 1
    start,end = map(int,raw_input().split())
    prime = primes(end)
    lis = []
    while(start<=end):
        factors = factor(start)
        sod1 = sum_of_digit(start)
        sod2 = 0
        for a in factors:
            sod2 += sum_of_digit(a)
        print sod1,sod2
        if(sod1==sod2):
            lis.append(start)
        start += 1
    print len(lis)
