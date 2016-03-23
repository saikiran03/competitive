def test(x):
    return x/2 + x/3 + x/4

def func(x):
    if(test(x)<x):
        return x
    else:
        return func(x/4)+func(x/3)+func(x/2)

x = raw_input()
while(x != ''):
    x = int(x)
    print func(x)
    x = raw_input()
