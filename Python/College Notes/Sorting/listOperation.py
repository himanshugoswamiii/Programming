x=list(map(int,input().split()))
x.append(20)
print("The no appended is 20")
print("list after append ",x)
x.insert(0,45)
print("The no inserted is 45")
print("list after instering ",x)
del x[2]
print("We are deleting element at index 2")
print("list after deleting ",x)
x.remove(5)
print("After removing 5: ",x)
x.pop(4)
print("After popping the element at index 4:",x)


