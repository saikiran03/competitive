t = input()
while t:
    t -= 1
    k = input()
    root = 0
    while k:
        k -= 1
        node_id,node_sum = map(int,raw_input().split())
        root += node_id - node_sum
    print root
