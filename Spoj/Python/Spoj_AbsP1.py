tc = input()
for _ in xrange(tc):
	r = input()
	li = list(map(int,raw_input().split()))
	res = 0
	for a in xrange(1,r):
		res += a(r-a)*(li[r]-li[r-1])
	print res