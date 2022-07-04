X,Y=input().split()
# To take input in the same line
X=int(X)
Y=float(Y)
# Note : When working on questions which include charges , include charges in conditions while comparing
if X+0.50<=Y and X%5==0 :
    print('%.2f'%(Y-X-0.50))
else:
    #print (round(Y,2))
    print('%.2f'%Y)
    # Since we want to print upto 2 decimal points
