combin = ['TTT', 'TTH', 'THT', 'THH',  'HTT', 'HTH', 'HHT', 'HHH']
tc = input()
for _ in xrange(tc):
	sol = [0]*8
	r = input()
	res = raw_input()
	a,b,l = 0,3,len(res)
	while b<=l:
		sol[combin.index(res[a:b])]+=1
		a+=1
		b+=1
	print r,
	for a in sol:
		print a,
	print ""