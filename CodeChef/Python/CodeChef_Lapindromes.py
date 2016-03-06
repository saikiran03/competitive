t = input()
while t:
	t -= 1
	text = raw_input()
	l = len(text)
	if(l%2):
		first = text[0:len(text)/2]
		last = text[len(text)/2+1:]
	else:
		first = text[0:len(text)/2]
		last = text[len(text)/2:]
	first = list(first)
	first.sort()
	first = ''.join(first)
	last = list(last)
	last.sort()
	last = ''.join(last)
	if(first==last):
		print "YES"
	else:
		print "NO"
		