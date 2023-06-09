class Student:
    def __init__(self, m1, m2) -> None:
        self.m1 = m1
        self.m2 = m2

    def __add__(self, other):
        m1 = self.m1 + other.m1
        m2 = self.m2 + other.m2
        return Student(m1, m2)

    def __gt__(self, other) -> bool:
        s1 = self.m1 + self.m2
        s2 = other.m1 + other.m2
        return s1>s2

    def __str__(self) -> str:
        return f"{self.m1} {self.m2}"
    

s1 = Student(56, 24)
s2 = Student(76, 89)

s3 = s1+s2
print(s1)
print(s2)
print(s3)
print(s1>s2)

