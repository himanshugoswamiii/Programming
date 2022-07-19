def fibonacci_memo(n,memo):
    if memo[n-1] is not None:
        # Data is stored in memo later
        return memo[n-1]
    if n==1 or n==2:
        result=1
    else:
        result=fibonacci_memo(n-1,memo)+fibonacci_memo(n-2,memo)

    memo[n-1]=result;
    return result

# Main fibonacci function
def fibonacci(n):
    memo=[None]*(n)
    # Creating a Array of n size for storing results
    return fibonacci_memo(n,memo)

# Driver's Code
print(fibonacci(20));
