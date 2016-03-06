def showall():
    print books,workers
    print pages
    print limit
    print p

t = input()
while(t):
    books, workers = map(int,raw_input().split())
    pages = list(map(int,raw_input().split()))
    s = sum(pages)
    limit = float(s)/workers
    start = 0
    p = 0
    while start<books:
        p += pages[start]
        if(p>=limit and start != 0):
            print '/',pages[start],
            p = 0
        else:
            print pages[start],
        start += 1
        if(start == books):
            print ''
        
