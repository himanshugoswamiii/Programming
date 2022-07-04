from goto import label,goto
n=int(input())
for i in range(n):
    # Take input tuple in a List
    loT=list()
    r=int(input("Enter no of rows for the list: "))
    for i in range(r):
        loT.append(())
        loT[i]=tuple(map(int,input().split()))
    print(loT)
    # End of taking input
    # Now let's join the tuple

    # Comparing the first element of each tuple
    i=1
    label .myLabel
    while(i<(r-1)):
        q=loT[0]        
        if loT[0][0]==loT[i][0]:
            q=q+loT[i]
            q=tuple(set(q)) #Removing duplicates from tuple
            goto .myLabel

    print(q)

    # Let's find the length a tupe in ith entry
    #for i in range(r):
    #    c=len(loT[i])
    #    print(c) # Now we have length of each of the tuple
        

