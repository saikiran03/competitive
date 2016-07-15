def base3(n, l):
	rep = []
	for _ in xrange(l):
		if(n):
			rep.append(n%3-1)
			n /= 3
		else:
			rep.append(0)
	
	return rep[::-1]

for _ in xrange(input()):
	n = input()
	b = list(map(int,raw_input().split()))
	a = list(map(int,raw_input().split()))
	
	if(n==1):
		print a[0] + b[0]
	
	else:
		l = pow(3, n)
		sol = -1
		
		for i in xrange(l):
			if(i%3!=2):
				c, res, flag = [], [], True
			
				for j in a:
					c.append(j)
			
				bitset = base3(i, n)
				for j in xrange(n):
					c[j + bitset[j]] += b[j]
			
				for j in xrange(n):
					if(c[j] != c[0]):
						flag = False
						break
			
				if(flag):
					sol = max(sol, c[0])
		
		print sol