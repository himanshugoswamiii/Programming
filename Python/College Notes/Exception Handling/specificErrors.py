a=int(input("Enter the no: "))
try:
    b=100/a
    print(a)
    print(c)
# Find which name is not define
except NameError as n: # NameError: class name
    print("Variable is not defined",n)
except ZeroDivisionError:
    print("x can't take value 0")
    #exit()  # We don't want to run the program further

print("-------After error-----------------")
i=a
print(i*2)
for i in range(b):
    print(i)
