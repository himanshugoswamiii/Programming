import os
x=input("Enter file name")
for (files) in os.walk('/home/himanshu/Desktop/Programming/Python Projects/',topdown=True):
    if x in (files):
        print(x," File found in ",files)
    else:
        print("File not found in ",files)
