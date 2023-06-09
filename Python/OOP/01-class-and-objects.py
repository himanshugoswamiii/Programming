class Computer:
    def __init__(self, lcpu, lram):
        self.cpu = lcpu
        self.ram = lram

    def config(self):
        print("Config : ", self.cpu, self.ram)

if __name__=="__main__":
    comp1 = Computer("Intel", 16)
    comp2 = Computer("AMD", 8)
    comp1.config() 
    comp2.config() 
    # Computer.config(comp1) # Way - 2

