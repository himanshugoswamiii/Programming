n=int(input())
for i in range(n):
    arr=list(map(int,input().split()))
    l=len(arr)
    for i in range((l+1)//2):
        k=arr[i]
        arr[i]=arr[l-(i+1)]
        arr[l-(i+1)]=k
    print(arr)
