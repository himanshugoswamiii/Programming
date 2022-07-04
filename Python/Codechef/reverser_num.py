n=int(input())
for i in range(n):
    x=int(input())
    num=0
    while x>0:
        r=x%10
        num=num*10+r #  to reverse
        x=x//10 # for the remainder 
    print(num)
    #x=int(x)
    #for j in range(l):
    #    r=x%10
    #    y[j]=r
    #    x=x//10 #for the remainder
    #y[l]='/'
    #print(y)
    #for j in range(l):
    #    print(x[l-(j+1)],end='')
    #print()

