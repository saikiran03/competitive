import math
 
a = input()
#fr = 0
b = a
p = 2
factors = []
#size = input()
#arr = list(map(int,raw_input().split()))
while (b!=1):
	if(len(factors)==0 and p>int(math.sqrt(a))+1):
		factors.append(a)
		break
	else:
		if(b%p==0):
			factors.append(p)
			while(b%p == 0):
				b /= p
		p += 1
		
print factors
'''
for num in arr:
	for fac in factors:
		if (num%fac==0):
			fr += 1
			break
print fr
'''
