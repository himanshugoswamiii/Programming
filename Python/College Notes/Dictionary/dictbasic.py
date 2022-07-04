# Create a Dictionary
myDict={
        "Name":"Himanshu",
        "class":"MCA",
        "Marks":90
        }
print(myDict)
print(myDict.get("Marks"))

# Check the Key
print("class" in myDict.keys())

# Update the value in Dictionary
myDict["class"]="M.Sc"
print(myDict)

# Note if your key (here "class") is not present in your Dictionary then it will add that key
myDict["extra"]=666
print(myDict)

# help(dict) in the Interpreter for help

# Updating the Dictionary
myDict.update({"extra":"777"})
print(myDict)

# Popping a key from dicitonary
# Popping the last Key
z=myDict.popitem()
print("The Dicitonary is :",myDict," and popped item is: ",z)
print(type(z))

# Popping a particular Key
z2=myDict.pop("class")
print(z2)
print(type(z2))

#del myDict
#print(myDict) # Error: NameError : not defined

# Check for a value in Dicitonary
for x in myDict.items():
    print(x)

# myDict.keys
# myDict.
