size = raw_input()
while(size != ''):
    size = int(size)
    test = raw_input()
    string = raw_input()
    if test in string:
        for a in range(len(string)-size+1):
            if(string[a:a+size] == test):
                print a
        print ''
    size = raw_input()
