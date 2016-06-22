mod = 10**9+7
facs = [1]*100005
MI = [1]*100005

def genFact():
	for i in xrange(1,100001):
		facs[i] = (facs[i-1]*i)%mod
	return	
	
def genMI():
	for i in xrange(0,100001):
		MI[i] = pow(facs[i], mod-2, mod)
	return

def Combinations(n,r):
	f = facs[n]
	ga = MI[n-r] 
	gb = MI[r]
	return (f * ((ga*gb)%mod))%mod
 
 
genFact()
genMI()
for _ in xrange(input()):
	n, k = map(int,raw_input().split())
	a = list(map(int,raw_input().split()))
	
	z = a.count(0)
	n = n-z
	sol = 0
	
	if(z>0):
		s = 1
		k = n
	else:
		if(n<k):
			k = (n/2)*2
		s = 2	
	
	while(k>=0):
		sol += Combinations(n,k)
		sol %= mod
		k -= s
	
	print sol%mod
