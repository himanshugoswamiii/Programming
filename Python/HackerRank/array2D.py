x=list()
# 6*6 Array input
for i in range(6):
    x.append([])
    x[i]=list(map(int,input().split()))
print(x)
# HourGlass i,j values (1,1) to (4,4)
# Sum of 16 HourGlasses
sum=list()
# We will find max(sum)
for i in range(1,5):
    for j in range(1,5):
        sum.append(x[i-1][j-1]+x[i-1][j]+x[i-1][j+1]+x[i][j]+x[i+1][j-1]+x[i+1][j]+x[i+1][j+1])
print(sum)
print(max(sum))
