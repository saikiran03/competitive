def generate_num(factors):
    return 2*factors[0] + 5*factors[1] + 7*factors[2]

def reset_fac(factors):
    factors = [0,0,0]
    return

factors = [0,0,0]
t,n= map(int,raw_input().split())
while(t):
    t -= 1
    cur,k = map(int,raw_input().split())
    phase = 0
    ways = 0
    num = generate_num(factors)
    while 1:
        if(phase==0):
            factors[0] += 1
        elif(phase==1):
            factors[1] += 1
        else:
            factors[2] += 1
        num = generate_num(factors)
        print num,factors
        if(num == cur):
            ways += 1
            if(phase==0):
                phase = 1
            elif(phase==1):
                phase = 2
            else:
                break
    print ways
