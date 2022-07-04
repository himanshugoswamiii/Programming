def checkNest(a,c):
    if type(a)==type(list()):
        c+=1
        # print("nestin level",c)
        print("a is ",a) # -- Just to check (for me)
        for i in range(len(a)):
            return checkNest(a[i])
    else:
        print("nesing level",c)

x=[10,[12,13,[14,15]],16,17]
for i in range(len(x)):
    c=0
    checkNest(x[i],c)
