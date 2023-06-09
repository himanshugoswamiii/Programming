class A:
    def __init__(self):
        print("In A init")

    def feature1(self):
        print("this is feature1")

    def feature2(self):
        print("this is feature2")

class B(A):
    def __init__(self):
        super().__init__()
        print("In B init")

    def feature3(self):
        print("this is feature3")

if __name__=="__main__":
    myObj = B()
    myObj.feature1()
    myObj.feature3()
