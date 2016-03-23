users = []
t = input()
while(t):
    t  -= 1
    users.append(raw_input())
users = list(set(users))
users.sort()
for a in users:
    print a
    
