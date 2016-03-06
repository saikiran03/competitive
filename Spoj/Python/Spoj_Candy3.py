tc = input()
while tc:
	tc -= 1
	size = input()
	su  = 0
	for _ in xrange(size):
		su += input()
	if(su%size):
		print "YES"
	else:
		print "NO"