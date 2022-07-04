x=int(input())
y=int(input())
z=int(input())
n=int(input())
# Using List Comprehension 
list1=[i for i in range(x+1)]
list2=[i for i in range(y+1)]
list3=[i for i in range(z+1)]
print(list1,list2,list3)
mylist=[[i,j,k] for i in list1 for j in list2 for k in list3 if i+j+k!=n]
print(mylist)
