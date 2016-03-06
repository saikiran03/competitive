t = input()
visits = list(map(str,raw_input().split()))
hall_of_fame = {}
for a in visits:
    if a not in hall_of_fame:
        hall_of_fame[a] = 1
    else:
        hall_of_fame[a] += 1
print (key for key,val in hall_of_fame.iteritems() if val == max(hall_of_fame.values()))
