def retmedian(t):
	if(t%2):
		return float(t)/2
	else:
		return t/2
	
t = input()
for a in range(10):
	diff = input()
	mid = retmedian(t)
	diff = retmedian(diff)
	print mid+diff
	print mid-diff
		
