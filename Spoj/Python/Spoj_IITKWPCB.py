from fractions import gcd

for _ in xrange(input()):
	x = input()
	y = x/2
	while(gcd(x,y)!=1):
		y-=1
		if(y==0):
			break
	print y