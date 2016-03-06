def listsubstr(string):
    reqlist = []
    for end in range(1,len(string)+1):
        for start in range(end):
            reqlist.append(string[start:end])
    return reqlist

def remove_from_array(array,value):
    new_array = []
    for item in array:
        if(item != value):
            new_array.append(item)
    return new_array

t = input()
while(t):
    t -= 1
    length, queries = map(int,raw_input().split())
    string = raw_input()
    substring = listsubstr(string)
    number_of_occurences = []
    while(len(substring)):
        first_item = substring[0]
        number_of_occurences.append(substring.count(first_item))
        substring = remove_from_array(substring,first_item)
    while(queries):
        queries -= 1
        reqnum = input()
        result = 0
        for a in number_of_occurences:
            if(a == reqnum):
                result += 1
            elif(a > reqnum):
                result += a
        print result
