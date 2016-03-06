t = input()
while(t):
    t -= 1
    num1,num2 = map(str,raw_input().split())
    numSum = str(int(num1[::-1]) + int(num2[::-1]))
    print int(numSum[::-1])
