import math

test = input()
while(test):
	test -= 1
	start, end = map(int,raw_input().split())
	sieve = range(start,end+1)
	for x in xrange(2, int(math.sqrt(end))+1):
		sp = start/2
		y = 0
		while(y<end-start+1):
			if(sieve[y]==1):
				sieve[y] = 0
			if(sieve[y]%x==0 and sieve[y]!=x):
				sieve[y]=0
				y+=x
			else:
				y += x - sieve[y]%x
	for x in sieve:
		if(x):
			print x
	print ''