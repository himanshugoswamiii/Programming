# Recursion : A defined function can call itself
def myRecFunc(a):
    a=a+2
    if a>10:
        return a
    myRecFunc(a)

# Driver Code
print(myRecFunc(3))

# Expected Output : 11
# Real Output: None
# Expectation: Control leaves the function when it reaches a return statement
