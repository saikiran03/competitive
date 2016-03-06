tc = input()
for _ in xrange(tc):
	n,k = map(int,raw_input().split())
	a = list(map(int,raw_input().split()))
	b = list(map(int,raw_input().split()))
	c = max(abs(min(b)),max(b))
	inter = 0
	for i in xrange(n):
		inter += a[i]*b[i]
	inter += c*k
	print inter