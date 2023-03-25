
**What is wrong with the following code?**
```cpp
int missingNumber(int A[], int N)
{   
    int arr[N] = {0}; 
    // ERROR: Variable sized object may not be initialized
    for (int i=0; i<N; i++){
        arr[A[i]-1] = 1;
    }
    
    for (int j=0; j<N; j++){
        if (arr[j]==0){
            return j+1;
        }
    }
    return -1;
}
```

Will it give errors while compiling

> Statically declared arrays are allocated memory at *compile time* and their size is fixed
