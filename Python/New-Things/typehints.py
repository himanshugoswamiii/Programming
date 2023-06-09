def sum(x: int, y: int):
    return x+y


def sum2(x, y):
    # Without type hints
    return x+y
if __name__ == "__main__":
    print(sum("a", "s")) # Works : Python still is dynamically typed
    print(sum2("a", "s"))
