prime = [2]

def isprime(num):
    if num<2:
        return False
    elif num == 2:
        return True
    for a in prime:
        if num % a == 0:
            return False
    prime.append(num)
    return True

def primes(num):
    for i in range(max(prime)+1,num+1):
        flag = 1
        for j in prime:
            if(i%j==0):
                flag = 0
                break
        if(flag):
            prime.append(i)

t =input()
while(t):
    t -= 1
    start = input()
    if(max(primes)<start):
        primes(start)
    while(not isprime(start+1)):
        start += 1
    print start
