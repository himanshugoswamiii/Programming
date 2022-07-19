def fibonnaci(n):
    if n==1 or n==2:
        result=1
    else:
        result=fibonnaci(n-1)+fibonnaci(n-2)
    return result

# Driver's Code
print(fibonnaci(20));
