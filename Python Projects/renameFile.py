import os
x=input("Enter the file name you want to change : ")
d=os.getcwd() # Get the directory in which we are in
file_path=d+'/'+x # Adding the strings so that looks like this
# file_path='/home/himanshu/Desktop/Programming/Python Projects/new.txt'
if os.path.isfile(file_path):
    print("File Exists")
else:
    print("File Doesn't Exist")
    exit()

y=input("Enter the new file name ")

os.rename(x,y)
print(x,"renamed to",y)

