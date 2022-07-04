n=int(input("Enter no of test cases: "))
for i in range(n):
    x=input("Enter the string: ")
    if (len(x)%3==0 or len(x)%5==0 or len(x)%7==0):
        print("String is Good")
    else:
        print("String is not Good")
