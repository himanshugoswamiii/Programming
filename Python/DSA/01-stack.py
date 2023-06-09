# take input in a list

input_string = input("Enter the elements sepearted by space: ")
my_list = input_string.split() # Returns a list by sepearating input using whatever in split()
int_list = [int(el) for el in my_list]
print(my_list)
print(int_list)

# pop
x = int_list.pop()
print(int_list)
print(x)

int_list.append(20)
print(int_list)
