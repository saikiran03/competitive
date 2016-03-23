fr = input()
flist = []
fflist = []
for f in xrange(fr):
	li = list(map(int,raw_input().split()))
	fid, fn = li[0],li[1]
	for a in xrange(2,m+2):
		fflist.append(li[a])
	flist.append(fid)
fflist = set(fflist)
flist = set(flist)
fflist = list(fflist.difference(flist))
print len(fflist)