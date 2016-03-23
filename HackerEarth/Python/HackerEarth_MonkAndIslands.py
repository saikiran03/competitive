def routelength(routes,root,node):
	if(node in routes[root]):
		return 1
	else:
		return routelength(routes,routes[root][0],node)+1

t = input()
for _ in xrange(t):
	n,m = map(int,raw_input().split())
	routes = []
	for Q in xrange(n):
		routes.append([])
	for Q in xrange(m):
		a,b = map(int,raw_input().split())
		routes[a-1].append(b)
	routeLens = []
	
	print routes
	