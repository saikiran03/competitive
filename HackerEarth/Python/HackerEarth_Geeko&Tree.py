#HackerEarth_Geeko&Tree.py 50/50 pts
t = input()
for _ in xrange(t):
	k,n = map(int,raw_input().split())
	nodes = (pow(k,n+1)-1)/(k-1)
	res = 0
	while(nodes!=0):
		res += nodes%10
		nodes /= 10
	print res
