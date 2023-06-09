from collections import deque

q = deque([1, 2, 3, 4]) # declaring a deque with some values
print(q)
q.append(29)
q.popleft()
print(q)
print(type(q))
