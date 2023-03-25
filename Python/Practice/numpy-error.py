import numpy as np
def myfunc(x):
    if 5 <= x[0].any() <= 20:
        print(x)
    else:
        print(20)

x = np.array({10, 20, 30})
myfunc(x)
