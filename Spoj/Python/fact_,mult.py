from math import factorial

number = input()
result = 1
for a in range(1,number+1):
    result *= factorial(a)
print result%109546051211
