def palindrome(lst):
    outlist=[] # For the output list
    for x in lst:
        x=str(x)
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

print(palindrome(["madaM","Himanshu",121,100,"Cos","Non"]))
