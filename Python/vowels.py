# Change all vowels with the Consonant c
x=input()
for i in range(len(x)):
    if x[i] in "aeiou":
        x=x.replace(x[i],'c')
print(x)
#y=int(input(
