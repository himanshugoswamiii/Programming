def sumOfDigits(num : int):
    while num>9:
        sum = 0
        while num:
            sum += num%10
            num = num//10

        num = sum

    return num

# Main
x = int(input())
for i in range(9, x, 9):
    print(f" i: {i} ,sum: {sumOfDigits(i)}")

