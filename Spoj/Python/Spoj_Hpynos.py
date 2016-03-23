def breakInt(n):
	r = 0
	while n>0:
		r += (n%10)**2
		n /= 10
	return r

t = input()
arr = [t]
rep = 0
while (t!=1):
	rep += 1
	t = breakInt(t)
	if(t in arr):
		break
	arr.append(t)
if(t==1):
	print rep
else:
	print -1