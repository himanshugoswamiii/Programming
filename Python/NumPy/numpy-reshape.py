#  It returns an array with the same data but with a new shape. 
# The number of elements in the original array must match the number of elements in the reshaped array.
# It fills the values row wise i.e. First row will be filled first
import numpy as np
oldArr = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])

# Change it's shape to an array of 5 rows and 2 columns
newArr = np.reshape(oldArr, (5, 2))


print("Old Array\n", oldArr)
print("Reshaped Array\n", newArr)

