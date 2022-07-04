#myList=[[1,2,4],[0,2,3]]
#print(myList)
## To input into the list
#x, y=map(int,input("Enter no of rows and columns: ").split())
#myList2=[[0]*y]*x # Here we giving the list [[0,0,0],[0,0,0],[0,0,0,..] 
#for i in range(x):
#    for j in range(y):
#        myList2[i][j]=input("Enter the element: ")
#        print(end=' ')
#print(myList2)

# ----------------Correct Way-------------------------
n = int(input("Enter no of columns: ")) # columns
m = int(input("Enter no of Rows: ")) # rows
print(n,m)
myList3 = []
for i in range(0,m):
    myList3.append([])
    for j in range(0,n):
        myList3[i].append(0) #Put 0 to every entry of column. It's for initialising the list
        myList3[i][j] = input("Enter First seperated by space")
print(myList3)

#-------------------Better Way------------------------------
# Take a list with any no of Columns
n = int(input("Enter no of columns: ")) # We don't even need columns
m = int(input("Enter no of Rows: ")) # rows
print(n,m)
myList3 = []
for i in range(0,m):
    myList3.append([])
    myList3[i]= list(input("Enter {}th column seperated by space".format(i)).split())
print(myList3)

