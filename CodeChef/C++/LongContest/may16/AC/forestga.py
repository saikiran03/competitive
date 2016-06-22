h = []
r = []

def exc(t):
	ans = 0
	for i in xrange(n):
		p = h[i] + t*r[i]
		if(p >= l):
			ans += p
	return ans>=w

def bs():
	l = 0
	h = 10**18
	while(l<h):
		m = l + (h-l)/2
		if(exc(m)):
			ans = m
			h = m
		else:
			l = m+1
			ans = m+1
	return ans

n,w,l = map(int,raw_input().split())
for i in xrange(n):
	a,b = map(int,raw_input().split())
	h.append(a)
	r.append(b)
print bs()