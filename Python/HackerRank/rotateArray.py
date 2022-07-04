def rotateLeft(d,arr):
    arr2=arr[:d] # Slicing
    arr=arr[d:]
    arr=arr+arr2
    return arr

arr=[2,3,4,5,6]
rotateLeft(2,arr)
