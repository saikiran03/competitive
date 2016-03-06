t = input()
while(t):
    t -= 1
    accounts = {}
    num_acc = input()
    while(num_acc):
        acc_det = raw_input()
        if(accounts.has_key(acc_det)):
            accounts[acc_det] += 1
        else:
            accounts[acc_det] = 1
        num_acc -= 1
    for a in sorted(accounts):
        print a,accounts[a]
    raw_input()
    print ''
