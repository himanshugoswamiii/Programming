# The letters we know 
know=input()
n=int(input())
for i in range(n):
    w=input()
    for j in range(len(w)):
        if w[j] not in know:
            flag=0
            break
        else :
            flag=1
    if flag==0:
        print("No")
    else:
        print("Yes")
        
