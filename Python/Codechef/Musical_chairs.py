# If there are 10 player then the ways 1 can be winner is 1,3,9 =3 
n=int(input()) #TEst cases
for i in range(n):
    x=int(input()) #No input
    x-=1 # We will check for k whose multiple is x-1
    count=0
    j=1
    while(j*j<=x):
        if (x%j==0):
            count+=1
            if (j*j != x):
                count+=1
        j+=1
    print(count)

