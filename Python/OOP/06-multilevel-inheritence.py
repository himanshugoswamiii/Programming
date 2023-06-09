class A:
    def feature1(self):
        print("this is feature1")

    def feature2(self):
        print("this is feature2")

class B(A):
    def feature3(self):
        print("this is feature3")

class C(B):
    def feature4(self):
        print("this is feature4")

if __name__=="__main__":
    myObj = C()
    myObj.feature1()
    myObj.feature3()
    myObj.feature4()
