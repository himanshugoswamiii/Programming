telephone={
        9868901592:"Himanshu",
        8383037697:"Himanshu"
        }
def myTelephoneDict(name):
    values=[] # To store the phone nos
    for x in telephone:
        if telephone[x]==name:
            values.append(x)
    return values

name=input("Enter the name")
val=myTelephoneDict(name)
if len(val)==0:
    print("No record found")
else:
    print("Corresponding records are",val)

