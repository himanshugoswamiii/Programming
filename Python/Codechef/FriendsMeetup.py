n=int(input())
for i in range(n):
    x1,x2=map(int,input().split())
    if x1==x2 or x1>x2:
        print("Yes")
    else: 
        print("No")

