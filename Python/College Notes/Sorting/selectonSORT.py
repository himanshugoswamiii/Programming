n=int(input("Enter no of test cases: "))
for i in range(n):
    x=list(map(int,input("Enter your list: ").split()))
    print(x)
    for j in range(len(x)-1):
        ch=x[j]
        d=j
        for k in range(j,len(x)-1):
            if ch>x[k+1]:
                ch=x[k+1]
                d=k+1
        x.pop(d)
        x.insert(j,ch) 
                                                        
    print(x)
