import numpy as np
np1=np.array([1,2,5])
print(np1)
np2=np.array([1,2,3,1000000000000000000000000000000000000000000000000])
# Bytesize of the elements
print(np1.itemsize)
print(np2.itemsize)

# Creating ARRAYS using numpy
npZero=np.zeros((3,4),dtype='int32')
print(npZero)

# Creates a array with every element being 1
npOnes=np.ones((3),dtype='int32')
print(npOnes)

# Create a array with every element being 10 -> Our custom input
npFull=np.full((2,6),10)
print(npFull)

# Copying
npCopy=np.copy(npFull)
print(npCopy)

# View
npView=npCopy.view()
print(npView)
# Pointing to the same object
# Make changes into one and it'll reflect into other
npView[0,0]=0
print(npCopy)
print(npView)

# base
print(npFull.base,npCopy.base,npView.base)

#--- Concatenate : Adding ARRAYS
arr1=np.array(range(10))
arr2=np.array(range(20,30))
print(arr1)
print(arr2)
arr3=np.concatenate((arr1,arr2))
print(arr3)

# For multidimensional Array : axis=0 or axis=1
