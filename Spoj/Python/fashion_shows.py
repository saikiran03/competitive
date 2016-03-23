t = input()
while(t):
    t -= 1
    size = input()
    men = list(map(int,raw_input().split()))
    women = list(map(int,raw_input().split()))
    men.sort()
    women.sort()
    hot_quo = 0
    for a in range(size):
        hot_quo += men[a] * women[a]
    print hot_quo
