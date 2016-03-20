while True:
	try:
		a, b = map(int,raw_input().split())
		ba = bin(a)[2:]
		bb = bin(b)[2:]
		sol = ''
		ba = '0'*(32-len(ba)) + ba
		bb = '0'*(32-len(bb)) + bb
		for i in xrange(32):
			sol += '0' if(ba[i]==bb[i]) else '1'
		print int(sol,2)
	except:
		break