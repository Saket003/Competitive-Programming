n = int(input())

for i in range(0,n):
    val = (input()).split()
    l1=int(val[0])
    r1=int(val[1])
    l2=int(val[2])
    r2=int(val[3])

    if(l1==l2):
        print(l1)
        continue
    if(l1>l2):
        if(l1<=r2):
            print(l1)
        else:
            print(l1+l2)
    else:
        if(l2<=r1):
            print(l2)
        else:
            print(l1+l2)