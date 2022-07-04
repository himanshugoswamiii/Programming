# Union
setA={1,2,3}
setB={1,11,12,13}
print(setA,setB,sep=',')
setC=setA.union(setB)
print(setC)

# Set Differnce
setD=setA.difference(setB) # A-B
print(setD)
setE=setB.difference(setA) # B-A
print(setE)

# Intersection
setF=setA.intersection(setB)
print(setF)

#isdisjoint
x=setA.isdisjoint(setB)
print("Are set A and set B disjoint :",x)

# issubset
