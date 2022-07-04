#First Way
#x,y,z=int(input()),input(),input()
#print(x,y,z)
#print(type(x))
#print(type(y))
#print("Here we took input using enter ")
#print("\n")
# Second Way , using split
x, y, z=map(int,input("Enter three numbers : ").split())
print(x, y, z)
print(type(x))
print(type(z))
