tup1=(1,2,3,5,9)
tup2=(1,3,8,9,0)
tup=tup1+tup2
print(tup)
# Removing Duplicates
tup=tuple(set(tup))
# First convert it to set then convert back to tuple
print(tup)
