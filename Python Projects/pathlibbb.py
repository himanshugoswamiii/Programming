from pathlib import Path
# check if the directory Python Projects exists
dir_path=Path('/home/himanshu/Desktop/Programming/Python Projects/')

# We don't need to put it ==1, because it already gives a boolean value
if dir_path.is_dir():
    print("Exists")
else:
    print("Doesn't Exists")

# Check if the given file exists
file_path=Path('/home/himanshu/Desktop/Programming/Python Projects/new.txt')
if file_path.is_file()==1:
    print("Exists")
else:
    print("Doesn't Exists")

