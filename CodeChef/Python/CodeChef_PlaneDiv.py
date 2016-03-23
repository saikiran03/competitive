Inf = 1000000007

def div(a,b):
	if b==0:
		return Inf
	else:
		return float(a)/b

tc = input()
for _ in xrange(tc):
	n = input()
	families = {}
	lines = {}
	ys = {}
	mys, mfam = 0, 0
	for a in xrange(n):
		a,b,c = map(int,raw_input().split())
		if(a==0):
			x = div(b,c)
			y = div(c,b)
			try:
				ys[(x,y)] += 1
			except:
				ys[(x,y)] = 1
		else:
			x = div(a,b)
			y = div(a,c)
			try:
				families[(x,y)] += 1
			except: 
				families[(x,y)] = 1
	for a in families:
		try:
			lines[a[0]]+=1
		except:
			lines[a[0]]=1
	if(len(ys)):
		mys = ys[max(ys, key=ys.get)]
	if(len(families)):
		mfam = lines[max(lines, key=lines.get)]
	print max(mfam, mys)
