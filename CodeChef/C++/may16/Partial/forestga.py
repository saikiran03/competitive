from math import ceil
 
data = []
t = []
n,w,l = map(int,raw_input().split())
 
for _ in xrange(n):
	h,r = map(int,raw_input().split())
	m = max(ceil(float(l-h)/r), 0)
	data.append((m,h,r))
 
data.sort()
h = r = 0
 
for i in data:
	h+=i[1]
	r+=i[2]
	m = max(ceil(float(w-h)/r), i[0])
	t.append(m)
 
# print data
# print t
print int(min(t))