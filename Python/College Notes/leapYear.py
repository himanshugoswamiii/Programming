n=int(input("Enter no test cases:"))
for i in range(n):
    y=int(input("Enter the year to check "))
    if y%100!=0:
        if y%4==0:
            print("Year is leap year")
        else :
            print("Year is not leap")
    else:
        if y%400==0:
            print("Year is leap year")
        else :
            print("Year is not leap")
