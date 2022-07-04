myList=['20','30','35','67','89']
print(myList)
print(20 in myList)
print("3rd element of my list ",myList[2])
# ----------- Append List ---------
myList.append(56)
print("After appending the list is ",myList)

# -----------Extend List with another list -------------
toAdd=[15,20,14]
myList.extend(toAdd)
print("After extending the list is :",myList)

# ---------- Remove an element -----------------
myList.remove('35')
print("After removing 35 from list",myList)

#--------------Pop()---------------------------
# Deletes from the last of the list
z=myList.pop()
print("After: ",myList," and popped value :",z)

# ---------------List in List-------------
nameMarks=["ABC",89,"XYZ",98]
print(type(nameMarks[0]),nameMarks[0][1],sep=",")
# Here sep is for print
