import os

path = "/home/himanshu/Desktop/Programming/Python Projects/College/Programs/"

os.chdir(path) # Changing the directory

def read_text_file(file_path):
    with open(file_path,'r') as f:
        print(f.read())

# iterate throught all the files
for file in os.listdir():

    # Check whether file is in text format
    if file.endswith(".txt"):
        file_path = f"{path}{file}"
        #file_path = f"{path}\{file}"   # this probably works for windows

        # call read text file function
        read_text_file(file_path)

    # Execute the files which ends with .py
    if file.endswith(".py"):

        exec(open(file).read())
