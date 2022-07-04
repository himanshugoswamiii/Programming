fileHandler=open("myFile.txt","r+") # open file in Read+ mode
print(fileHandler.read()) # Pointer at the start
# Pointer at one line after Last line because print creates a new Line
fileHandler.write("\nLast Line Added")
print(fileHandler.read()) # This read will print a blank line because the pointer is at the last
fileHandler.close()

#lseek to move the pointer to the start
