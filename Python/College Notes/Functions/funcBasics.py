def myfunc(a,b):
    print("The nos are: ",a,"and",b)
    print("Sum of the nos :",a+b)
    print("Product of the nos :",a*b)
    print("Integer Division of the nos :",a//b)

x,y=map(int,input("Enter two nos to perform operation: ").split())
myfunc(x,y)
