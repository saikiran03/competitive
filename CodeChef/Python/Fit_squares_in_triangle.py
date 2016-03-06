t = input()
while(t):
    t -= 1
    base = input()
    squares = 0
    layer = 1
    while ((base-(2*layer))/2 > 0) :
        number_of_squares = (base - 2*layer)/2
        squares += number_of_squares
        layer += 1
    print squares
