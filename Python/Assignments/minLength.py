n=int(input("Enter no of test cases: "))
for i in range(n):
    x=input("Enter the string: ")
    y=list(map(str,x.split()))
    k=0
    for j in range(len(y)-1):
        if len(y[k])<len(y[j+1]):
            k=k
        else:
            k=j+1
    print(y[k],"is of minimum length in \'",x,"\'")
