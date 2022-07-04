def popst(s):
    s.pop()
    print("Your list is now",s)
def pushst(s,el):
    s.append(el)
    print("Your list is now",s)

# In this we will do the operation on the same stack
n=int(input("Enter the size of stack"))
print("Enter your stack using Enter key")
st=list() # Initialize list
for i in range(n):
    st.append(input())
    
print(st)
flag=1
while(flag==1):
    print("In the next prompt Input 1 for pop and 2 for push: ")
    op={
            "1":popst, # We removed the parenthesis in order to save the function instead of execute it
            "2":pushst
            }
    x=int(input("1/2 ? "))
    if x==1:
        op['1'](st)
    else:
        el=int(input("Enter no to push: "))
        op['2'](st,el)
    flag=int(input("If you want to perform operation again press 1, To quit press 0: "))
print("-----Exited the program------")
