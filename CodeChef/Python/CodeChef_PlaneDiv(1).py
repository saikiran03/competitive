inf = 10**9+7

tc = input()
for _ in xrange(tc):
	n = input()
	ans = 0
	lines = {}
	for p in xrange(n):
		a,b,c = map(int,raw_input().split())
		if(b==0):
			m = inf
			c = -float(c)/a
		else:
			m = -float(a)/b
			c = -float(c)/b
		try:
			lines[m].append(c)
		except:
			lines[m] = [c]
	for a in lines:
		l = len(set(lines[a]))
		ans = max(l,ans)
	print ans