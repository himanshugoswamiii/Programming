class Person:
    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age

    def compare(self, other) -> bool:
        """
        Compares the age of two objects
        """
        if (self.age==other.age):
            return True
        else:
            return False

def compare(x: int, y: int) -> bool:
    if x==y:
        return True

    return False

if __name__=="__main__":
    p1 = Person("himanshu", 22)
    p2 = Person("dev", 23)

    print(compare(2, 2))

    print(p1.compare(p2))

