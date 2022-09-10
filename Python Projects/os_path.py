import os
# check if the directory Python Projects exists
dir_path='/home/himanshu/Desktop/Programming/Python Projects/'

# We don't need to put it ==1, because it already gives a boolean value
if os.path.isdir(dir_path):
    print("Exists")
else:
    print("Doesn't Exists")

# Check if the given file exists
file_path='/home/himanshu/Desktop/Programming/Python Projects/new.txt'
if os.path.isfile(file_path):
    print("Exists")
else:
    print("Doesn't Exists")

