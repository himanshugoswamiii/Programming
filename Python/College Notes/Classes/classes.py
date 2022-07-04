# Defining a class
class partyAnimal:
    x=0
    # Construtor
    def __init__(self): 
        print('I am constructed')

    # Here self is not a keyword
    def party(self):
        self.x=self.x+1
        print("So far",self.x)

    # Destructor
    def __del__(self): 
        print('I am destructed', self.x)

# Types
an = partyAnimal() # At this point constructor will be called automatically
an.party()
an.party()
an.party()
an=42 # At this point Destructor will be called
print("an is",an)
