import numpy as np
# arr = np.array(1, 2, 3) - wrong way because np.array() is a funciton and it takes 1/2 args
arr = np.array([1, 2, 3])
print(arr)
print(type(arr))

# Iterate over the array
for i in arr:
    print(i)

# Find dimension of array
print("Dimension of {} is {} ".format(arr,arr.ndim))
