def Binn(y,el):
    mid=y[len[y]//2]
    if el<mid:
        return Binn(List[:mid],el)
    elif el==mid:
        print("Element at",mid)
    else:
        return Binn(List[mid:],el)

x=[21,43,2,12,145,6,7]
x.sort()
el=int(input("Enter your number"))
