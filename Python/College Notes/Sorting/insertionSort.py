n=int(input("Enter no of test cases: "))
for i in range(n):
    x=list(map(int,input("Enter your list: ").split()))
    print(x)
    for j in range(len(x)-1):
        if x[j]<=x[j+1]:
            continue
        else:
            tmp=x[j+1]
            x[j+1]=x[j]
            x[j]=tmp
    print(x)  
