# Parent Class
class PartyAnimal: 
    x = 0 
    name = '' 
    def __init__(self, nam): 
        self.name = nam 
        print(self.name,'constructed') 
    def party(self) : 
        self.x = self.x + 1 
        print(self.name,'party count',self.x) 

# Child Class
class CricketFan(PartyAnimal): 
    points = 0 
    def six(self): 
        self.points = self.points + 6 
        self.party() # Calling a method of parent class
        print(self.name,"points",self.points) 

# -- Driver's Code
s = PartyAnimal("Sally") 
s.party() 
j = CricketFan("Jim") 
j.party() # Calling a method of parent class using object
j.six() 
print(dir(j)) # We can see it has all the attributes and methods of parent class
