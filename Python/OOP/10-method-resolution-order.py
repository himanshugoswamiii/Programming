# Left to Right
class A:
    def __init__(self):
        print("In init A")

    def feature1(self):
        print("this is feature1")

    def feature2(self):
        print("this is feature2")

class B:
    def __init__(self):
        print("In init B")

    def feature3(self):
        print("this is feature3")

class C(A,B): # Multiple Inheritence
    def __init__(self):
        super().__init__()
        print("in init C")

    def feature4(self):
        print("this is feature4")

if __name__=="__main__":
    myObj = C()
    myObj.feature2()
