def sum(a=None, b=None, c=None):
    s = 0
    if (a!=None and b!=None and c!=None):
        s = a+b+c
    elif (a!=None and b!=None):
        s = a+b
    else:
        s = a

    return s


print(sum(1, 2))
print(sum(1, 2, 3))

