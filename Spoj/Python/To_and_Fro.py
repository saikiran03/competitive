size = input()
while(size):
    alpha = raw_input()
    index = 0
    index2 = 0
    turn = 1
    flag = 0
    st = ''
    while(index2 < size):
        if flag == 0 :
            st += alpha[index]
            flag = 1
        else:
            st += alpha[turn*size - 1 - index2]
            flag = 0
        index += size
        turn += 1
        if(index>=len(alpha)):
                index2 += 1
                index = index2
                turn = 1
                flag = 0
    print st
    size = int(raw_input())
