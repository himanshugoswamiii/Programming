class A:
    def show(self):
        print("In A show")

class B(A):
    def show(self):
        print("In B show")

obj = B()
obj.show() # Ouput: In B show
