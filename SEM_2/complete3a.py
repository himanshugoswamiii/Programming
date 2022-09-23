telephone={
        9868901592:"Himanshu",
        8383037697:"Himanshu"
        }
def myTelephoneDict(name):
    """
    Parameters:

    returns:

    """
    values=[] # To store the phone nos
    for x in telephone:
        if telephone[x]==name:
            values.append(x)
    return values

# Driver's Code
# A while loop which allows to check values until user exist
flag=1
while(flag==1):
    name=input("Enter the name")
    val=myTelephoneDict(name)
    if len(val)==0:
        print("No record found")
    else:
        print("Corresponding records are",val)

    flag=int(input("Do you want to continue \n Press 1 to yes 0 to no"))

