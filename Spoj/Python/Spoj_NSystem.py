
def getval(char):
	if(char=="m"):
		return 1000
	elif(char=="c"):
		return 100
	elif(char=="x"):
		return 10
	elif(char=="i"):
		return 1

def conv(num):
	res = 0
	flag = 0
	for a in num:
		if(ord(a)<97):
			flag = 1
			tmp = int(a)
		else:
			if(flag==0):
				tmp = 1
			flag = 0
			res += (tmp*getval(a))
	return res

def revconv(num):
	code = ""
	var = ['m','c','x','i']
	cof = [0]*4
	for a in xrange(4):
		cof[3-a] = num%10
		num/=10
	for a in xrange(4):
		if(cof[a]):
			if(cof[a]!=1):
				code += str(cof[a])+var[a]
			else:
				code += var[a]
	return code

tc = input()
for _ in xrange(tc):
	a,b = raw_input().split()
	a = conv(a)
	b = conv(b)
	a = a+b
	print revconv(a)
