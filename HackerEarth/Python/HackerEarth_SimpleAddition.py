tc = input()
while tc:
	tc -= 1
	r = input()
	arr = [[1,2]]
	n = 1
	l = 2
	for a in xrange(l):
                brr = []
		for x in xrange(a+1,l):
			tmp = arr[a]+arr[x]
			brr.append(tmp)
			print arr
			if(tmp==r):
				break
		l=len(arr)
		n+=1
		if(tmp==r):
			break
	print n
