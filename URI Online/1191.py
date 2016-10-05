def postorder(pre, inr):
    if(len(pre)<=1):
        return pre
    
    root = pre[0]
    sinr = inr.split(root)
    lt = sinr[0]
    rt = sinr[1]
    
    lpo = postorder(pre[1:len(lt)+1], lt)
    rpo = postorder(pre[len(lt)+1:], rt)
    
    post = lpo + rpo + root
    return post

while True:
    try:
        preo, inro = raw_input().split()
    except:
        break
    
    print postorder(preo, inro)