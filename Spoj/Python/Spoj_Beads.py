def rotate(text):
        head = text[0]
        text = text[1:]+head
        return text

t = input()
for _ in xrange(t):
        dp = i = 0
        w = raw_input()
        l = len(w)
        prev = w
        for i in xrange(l):
                w = rotate(w)
                if(prev>w):
                        prev = w
                        dp = i
        print dp+2
