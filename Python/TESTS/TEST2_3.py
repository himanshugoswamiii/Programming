def checkPerfectSquare(*values):
    print(values)
    myList=list()
    for x in values:
        i = 1
        count=0
        while(i**2 <= x):
            if ((x%i == 0) and (x/i == i)):
                count=1
            i+= 1
        if count==1:
            myList.append(True)
        else:
            myList.append(False)
        
    return myList

# Driver's Code
print(checkPerfectSquare(4,12,25,89))
