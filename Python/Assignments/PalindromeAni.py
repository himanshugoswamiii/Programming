n=int(input("Enter no of test cases: "))
for i in range(n):
    x=input("Enter the string: ")
    for j in range(len(x)//2):
        # First we will check if it's a simple palindrome
        if x[j].lower()==x[len(x)-(j+1)].lower():
            # Now we will check if it's our customized palindrome
            if  x[j].isupper()==x[len(x)-(j+1)].islower() or x[j].islower()==x[len(x)-(j+1)].isupper():
                flag=1
            else:
                flag=0
                break
        else:
            flag=0
            break
    flag=int(flag)
    if flag==1:
        print(x,"is Palindrome")
    else:
        print(x,"is not Palindrome")


