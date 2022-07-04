class employee:
    def __init__(self,fname,lname):
        self.fname=fname
        self.lname=lname

    @property
    def email(self):
        return f"{self.fname}.{self.lname}@hg.com"

    @email.setter
    def email(self,value):
        print(" --- Setting Email ---")
        names=value.split("@")[0] # Split the email address in two and take the first part
        self.fname,self.lname=names.split(".")

myObj=employee("Himanshu","Goswami")
print(myObj.email)

myObj.lname="kumar"
print(myObj.email)

myObj.email="Neha.Goswami@hg.com"
print(myObj.fname)
print(myObj.lname)


