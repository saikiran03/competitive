r = input()
rolls = list(map(int,raw_input().split()))
s = 0
for a in xrange(r):
    s += rolls[a]*(a*(2**(a-1))+(2**a))*(2**(r-1-a))
print int(s)%(10**9+7)
