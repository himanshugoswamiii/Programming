# Function definition
def myDict(wMeaning,para): # Here I'm taking two inputs Dictionary and Paragraph
    # First we converted our String to list so that we can acces all elements sepearately
    para=list(para.split(" "))
    outPara=list()
    for x in para:
        # Do something of the cases of x, so that if our Dictionary contain pet and string Pet
        # it will still show it's meaning
        x=x.lower()
        if x in wMeaning.keys():
            outPara.append("${}$".format(wMeaning[x]))
            # print("${}$".format(wMeaning[x]),end=" ") -- Testing
        else:
            outPara.append("$None$")
            # print("$None$",end=" ") -- Testing 

    # Convert out Output list back to string
    myStr=''
    for x in outPara:
        myStr+=' '+x
    return myStr


# Driver Code
myPara=input("Enter the Paragraph : ") # Take para from user
# My Dictionary
wMeaning={
        'cool':'not warm or hot',
        'cat': 'a small domesticated carnivorous mammal',
        'animal':'a living organism',
        'rat': 'a rodent,Animal',
        'pet': 'A tamed animal',
        'mine': 'showing possesion of something',
        'oops': 'Just an exclamation'
        }
print(myDict(wMeaning,myPara)) # Calling the Dictionary Function
# and printing the Function



