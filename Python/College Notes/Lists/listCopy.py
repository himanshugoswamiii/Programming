#x=[12,[13,1,[1,2],1],1]
## Copying using = operator
#z=x
#print(x,id(x))
#print(z,id(z))
## Note address is same
## -----------------------------------------
#
## Copying using copy()
#y=x.copy() # Returns a shallow copy of x
#print(x,id(x))
#print(y,id(y))
## Different id's 
#
## Let's append in both the list and see if changes reflect
#y.append([20,20,10])
#print("x is",x)
#print("y is",y)
#
#x.append([21,31])
#print("x is",x)
#print("y is",y)
#
## If we append in any of the list then it doesn't append to other list
#
##--- Then what is this shallow Copy
#x[1][1]='AA'
#print("x is",x)
#print("y is",y)
#
## Look the changes are reflected
## ----------Make changes in y
#y[2]='BB'
#
#print("x is",x)
#print("y is",y)

## ----------------------------
#     DEEP COPY
import copy
x=[12,[13,1,[1,2],1],1]
y=copy.deepcopy(x)
print("Old list is",x)
print("New list is",y)
x[1][1]='AA'
print("Old list after modification is",x)
print("New list after modification is",y)


