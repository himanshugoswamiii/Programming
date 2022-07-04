n=int(input())
for i in range(n):
    x=int(input())
    amt=list(map(int,input().split()))
    m=min(amt)
    sum1=0
    for j in range(x):
        sum1+=amt[j]
    print(sum1-m)
