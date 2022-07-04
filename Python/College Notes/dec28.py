# Unpacking tuple
a,b=(10,20)
print(a)
print(b)

# Unpacking list using *
rollNo=[20,21,24,35,40]
#r1,*r2,r3=rollNo
#print(r1,r2,r3,sep=",")
#print(type(r1),type(r2),type(r3))
print(rollNo)
*r,=rollNo
print(type(r))
#t=(10,20,30)
#print(type(t))
##[tl]=t
##print(type(tl))
#t2=(r1,r2,r3,r4,r5)=rollNo
#print(t2,type(t2))
#print(type(r3))

# Else with for loop
for i in range(1,5):
    print(i)
else:
    print("After loop")
