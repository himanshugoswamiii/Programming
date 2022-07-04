myName="Himanshu Goswami"
print("My name is :",myName," ,1st Index value : ",myName[1])
print("To print from indexes- 1 to 3 :",myName[1:3])
# Note: how it's excluding the 3rd value and printing only 'im'
print(myName[3:]) # Start:3 , End:end of array, Step-size : 1
print(myName[-6:-2]) #Start:-6 , End:-2 (-2 not included), Step-size: 1
# -6 means 6 from the last

print(myName[::2]) # To print alternate words . Step-size: 2

print(myName[-2:-6]) #No output for these lines
print(myName[5:2]) #No output for these lines

# To print in opposite direction use step-size: -1
print(myName[-2:-6:-1])

# -----------String Length-------------------
nameLen=len(myName)
print(nameLen)

print('\n')
# ------------Membership/Substring Keyword: 'in' -----------
if "Goswami" in myName:
    print("String Present in the name")
else:
    print("String not present in the name")
