x = 20
y = 30
print(x+y)
print(int.__add__(x, y)) # Behind the scenes

# If you change the type of the object to str
a = "Him"
b = "anshu"
print(a+b)
print(str.__add__(a, b))

# print statement
print(x)
print(x.__str__())

