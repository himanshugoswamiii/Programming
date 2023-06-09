class Student:
    school = "DUCS"

    def __init__(self, m1, m2) -> None:
        self.m1 = m1
        self.m2 = m2

    def avgMarks(self):
        # Instance method
        return (self.m1+self.m2)/2

    @classmethod
    def getSchool(cls):
        return cls.school;
    
    @staticmethod
    def info():
        print("this is a class")


if __name__=="__main__":
    s1 = Student(20, 30)
    s2 = Student(50, 33)

    # Accessing instance methods
    print(s1.avgMarks())  # Output : 25.0
    # print(Student.avgMarks()) # ERROR

    # Accessing classmethod
    print(s1.getSchool())  # Output : DUCS
    print(Student.getSchool())  # Output : DUCS

    # Accessing staticmethod
    s1.info() # Output : this is a class
    Student.info() # Output : this is a class






