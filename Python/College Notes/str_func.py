#----------- Concatenation -------------
fName="Himanshu"
lName="Goswami"
compName=fName+" "+lName
print(compName)

#----------upper() and lower()------------
print(fName,"in upper is: ",fName.upper())
print(fName,"in lower is: ",fName.lower())

#----------replace() --------------------
print(fName,"after replacing h with g:",fName.replace("h","g"))
# Note: replace is Case-Sensitive

#-----------strip()----------------------
# Removes space from both the end
myName2="  Himanshu"
print(myName2)
print(myName2.strip())

#----------split()------------------------
print(compName.split())
str1="This is #random string"
print(str1.split('#')) # To split when '#' is encountered

print("\n")
#----------format()----------------------
rollNo=21
myCGPA=9.6
myDetails="My name is {}. My roll no is {} and I secured {} CGPA"
print(myDetails.format(compName,rollNo,myCGPA))
myDetails="My name is {1}. My roll no is {0} and I secured {2} CGPA"
print(myDetails.format(compName,rollNo,myCGPA))

#----------count()------------------------------
hCount=compName.count('h')
print("h appears in",compName,hCount,"times")
