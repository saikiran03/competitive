mod = 786433
n = input()
a = list(map(int,raw_input().split()))
a = a[::-1]
for _ in xrange(input()):
	t = input()
	s = 0
	for i in xrange(n+1):
		s *= t
		s += a[i]
		s %= mod
	print s