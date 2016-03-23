t = input()
while(t):
    t -= 1
    num = input()
    n = num/5
    num_of_zeroes = 0
    while(n):
        num_of_zeroes += n
        n /= 5
    print num_of_zeroes
