# Create a new list based on the values of an existing list
mylist=[1,2,3,4,5,6,7,8,9,10]
print(mylist)
# Create a new list with even values among mylist
newlist=[]
for x in mylist:
    if x%2==0:
        newlist.append(x)
print(newlist)
