# Using writelines
f=open("newFile.txt","w")
f.writelines(["This is line 1\n","This is line 2\n","This is line 3\n"])
f.close()

# Using simple write()
f2=open("myFile2.txt","w")
f2.write("This is line 1 \nThis is line 2 \nThis is line 3")
f2.close()

# Opening both the files for reading
f=open("newFile.txt","r")
f2=open("myFile2.txt","r")
print(f.read()) 
print(f2.read()) 
f.close()
f2.close()
