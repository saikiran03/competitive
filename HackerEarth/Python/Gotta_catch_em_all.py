t = input()
evolve = list(map(int,raw_input().split()))
evolve.sort(reverse = True)
numDays = 0
day = 1
for a in evolve:
    if(numDays < day+a+1):
        numDays = a+day+1
    day += 1
print numDays
