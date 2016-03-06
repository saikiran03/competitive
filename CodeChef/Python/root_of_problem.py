t = input()
while(t):
    t -= 1
    n = input()
    tree = {}
    while(n):
        n -= 1
        id,childsum = map(int,raw_input().split())
        tree[id] = childsum
    for node in tree:
        if(tree[node] == 0):
            baseNodes.append(node)
    
