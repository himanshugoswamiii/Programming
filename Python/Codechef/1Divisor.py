n=int(input())
q=1
for i in range(1,11):
    if n%i==0:
        if q<i:
            q=i
print(q)
