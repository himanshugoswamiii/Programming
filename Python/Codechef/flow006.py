n=int(input())
for i in range(n):
    sum=0
    x=input()
    l=len(x)
    for i in range(l):
        sum+=int(x[i])
    print(sum)
