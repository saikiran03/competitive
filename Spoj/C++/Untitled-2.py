mod = 10**9+7
ans = []
a,b,c,d = 0,0,0,0
def fast_fib(n):
	if(n<2):
		ans.append(0)
		ans.append(1)
	else:
		fast_fib(n/2)
		a = ans[0]
		b = ans[1]
		c = 2*b-a
		c = (c*a)%mod
		d = (a*a + b*b)%mod
		if(n%2):
			ans[0] = d
			ans[1] = d+c
		else:
			ans[0] = c
			ans[1] = d
		return

fast_fib(10)
print ans