n=int(input())
for i in range(n):
    a,b,p,q=map(int,input().split())
    if a==p and b==q:
        print(0)
    elif (a+b)%2==(p+q)%2:
        print(2)
    else:
        print(1)


