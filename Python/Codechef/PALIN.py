n=int(input())
for i in range(n):
    x=int(input())
    flag=0
    c=1
    while(flag==0):
        y=str(x+c)
        for i in range(len(y)//2):
            if y[i]!=y[len(y)-(i+1)]:
                flag=0
                c+=1
                break
            else:
                flag=1
                continue
        if flag==1:
            print(y)



        

