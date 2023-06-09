class PyCharm:
    def execute(self):
        print("Compiling")
        print("Running")

class MyEditor:
    def execute(self):
        print("Spell Check")
        print("Convention check")
        print("Compiling")
        print("Running")

def show(obj):
    # the action will be taken dependent on the object type
    obj.execute()

if __name__=="__main__":
    x = PyCharm()
    y = MyEditor()

    show(x)
    show(y)


