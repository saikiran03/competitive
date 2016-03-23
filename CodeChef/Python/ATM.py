trans_amt, acc_bal = map(float,raw_input().split())
if (trans_amt%5 != 0) or (trans_amt>acc_bal):
    print "%.2f"%acc_bal
else:
    acc_bal -= trans_amt+0.50
    print "%.2f"%acc_bal
