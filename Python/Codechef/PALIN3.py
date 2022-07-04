n=int(input())
for i in range(n):
    x=int(input())
    flag=0
    y=x+1
    while(flag==0):
        y=str(y)
        for i in range(len(y)//2):
            if y[i]!=y[len(y)-(i+1)]:
                if y[len(y)-(i+1)]>y[i]:
                    c=(10**i)*(10 + y[i]-y[len(y)-(i+1)])
                    y=int(y)
                    y=y+c
                    break
                else:
                    y=(10**i)*(y[i]-y[len(y)-(i+1)])
                    y=int(y)
                    y=y+c
                    break
            else:
                flag=1
                continue
        if flag==1:
            print(y)



        

