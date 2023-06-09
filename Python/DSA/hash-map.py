nums = [1, 2, 4, 5, 2, 4, 5]

hash = {}

for x in nums:
    hash[x] = hash.get(x, 0)+1

for x in hash:
    print(x, hash[x])
