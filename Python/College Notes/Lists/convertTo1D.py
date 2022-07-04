# Convert any List to 1D list
def levels(list1):
    list2=[]
    for x in list1:
        if type(x)==list:
            list2+=levels(x)
        else:
            list2+=[x]

    return list2

#x=[12,13,14,14]
x=[12,[20,13,[45,12],1],16]
y=[]
y=levels(x)
print(y,type(y))

