tc = input()
for _ in xrange(tc):
	l,d,s,c = map(int,raw_input().split())
	while d>0:
		d-=1
		s *= (1+c)
		if(s>=l):
			break
	if(s>=l):
		print "ALIVE AND KICKING"
	else:
		print "DEAD AND ROTTING"
	