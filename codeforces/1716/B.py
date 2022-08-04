t = int(input())

while(t>0):
    n = (int)(input())
    chain = []
    for i in range (0,n):
        chain.append(str(i+1))
    print(n)
    for i in range (0,n):
        if(i!=0):
            print(' '.join(chain[slice(1,i+1)]),end=" ")
        print(1,end=" ")
        print(' '.join(chain[slice(i+1,n)]))
    t=t-1