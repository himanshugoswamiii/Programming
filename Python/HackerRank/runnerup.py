if __name__ == '__main__':
    n = int(input())
    arr=list(map(int,input().split()))
    print(arr)
    x=max(arr) # tells the max value in a list
    mylist=[]
    for i in arr:
        if x!=i:
            mylist.append(i)
    print(max(mylist))

