class Student:
    school = "DUCS"

    def __init__(self, m1, m2, brand) -> None:
        self.m1 = m1
        self.m2 = m2
        self.lap = self.Laptop(brand) # Object in the outer class


    def show(self):
        print(f"m1: {self.m1} , m2: {self.m2} , Laptop -> brand: {self.lap.brand} , ram: {self.lap.ram}")

    class Laptop:
        def __init__(self, brand):
            self.brand = brand
            self.ram = 8
            
        def show(self):
            print(f"brand: {self.brand} , ram: {self.ram}")

if __name__=="__main__":
    s1 = Student(20, 30, "Hp")

    s1.show()

    # Object outside the outer class
    l1 = Student.Laptop("Asus")
    l1.show()

