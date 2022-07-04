myList=list(map(int,input().split()))
#while len(myList)>0:
#    x=myList.pop()
#    if x%2==0:
#        print(x,"is Even")
#    else:
#        print(x,"is Odd")

# Using For
for i in range(len(myList)):
    x=myList.pop()
    if x%2==0:
        print(x,"is Even")
    else:
        print(x,"is Odd")
