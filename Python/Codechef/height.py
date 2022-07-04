n=int(input())
for i in range(n):
    N,K=map(int,input().split())
    Pheight=list(map(int,input().split()))
    count=0
    for j in range(N):
        if Pheight[j]>K:
            count+=1
    print(count)
