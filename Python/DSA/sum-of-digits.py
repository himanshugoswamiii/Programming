# LC : add-digits
def sumOfDigits(num : int):
    while num>9:
        sum = 0
        while num:
            sum += num%10
            num = num//10

        num = sum

    return num



if __name__=="__main__":
    x = int(input())
    for i in range(1,x):
        s1 = i%9 # Wrong
        s2 = sumOfDigits(i)
        if s1 != s2:
            print(f"Not {i}, sum is : {s2}")


