class Car:
    tyres= 4 

    def __init__(self, brand, mileage) -> None:
        self.brand = brand
        self.mileage = mileage

    def display(self) -> None:
        print(f"Brand is : {self.brand} and mileage is : {self.mileage} , Tyres: {self.tyres}")


c1 = Car("Hyundai", 20)
c2 = Car("Honda", 50)
c1.tyres = 10
c1.display()
c2.display()
        
