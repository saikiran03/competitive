def amaz(f):
	s,ans = [],0
	n = list( map(int, list(str(f)) ) )
	l = len(n)
	for i in xrange(l):
		val = 0
		for j in xrange(i,l):
			val ^= n[j]
			if not (val in s):
				ans += val
				s.append(val)
			print "(",i, j,") =>", n[j], val, ans,s 
	return ans
	
mod = 10**9+7

def test():
	r = 8547
	print r
	print amaz(r)

test()
# for _ in xrange(input()):
# 	a,b = map(int,raw_input().split())
# 	ans = 0
# 	for i in xrange(a,b+1):
# 		ans += (amaz(i))%mod
# 	print ans