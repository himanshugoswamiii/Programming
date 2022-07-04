# Creates the file if the file doesn't exist and then open it in write mode
# Opens the files in write mode if file exist
fileHandler=open("myFile.txt","w")
f=open("myFile2.txt","w")
fileHandler.write(input("Enter Some DATA"))
# fileHandler.close() -- Since we're using the read command later this will give an error that file is closed
f.close()
fileData=fileHandler.read() # This won't work because file is opened on write mode
print(fileData)
fileHandler.close()
