def palindrome(lst):
    outlist=[] # For the output list
    for x in lst:
        l=len(x)
        for j in range(len(x)//2):
            if x[j].lower()==x[l-(j+1)].lower():
                # Case-insensitive palindrome
                flag=1
            else:
                flag=0
                break
        # Appending into the list whether the no is palindrome or not
        if flag==1:
            outlist.append(True)
        else:
            outlist.append(False)
    return outlist

# Driver's Code
lst=list(map(str,input("Enter your List for Checking palindrome using space").split()))
print(palindrome(lst))
