t = input()
while(t):
	t -= 1
	size = input()
	arr = list(map(int,raw_input().split()))
	dick = {}
	mkey, mval = arr[0],0
	for a in arr:
		try:
			dick[a]+=1
		except:
			dick[a]=1
	for a in dick:
		if(mval<=dick[a]):
			mval = dick[a]
	for a in dick:
		if(dick[a]==mval):
			if(a<mkey):
				mkey = a
	print mkey,mval
			