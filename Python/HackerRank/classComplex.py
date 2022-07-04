import math

class Complex(object):
    def __init__(self, real, imaginary):
        self.real=real
        self.imaginary=imaginary
        
    def __add__(self, no):
        return "{.2f}+{.2f}i".format(self.real+no.real,self.imaginary+no.imaginary)

        
    #def __sub__(self, no):
    #    
    #def __mul__(self, no):

    #def __truediv__(self, no):

    #def mod(self):

    def __str__(self):
        if self.imaginary == 0:
            result = "%.2f+0.00i" % (self.real)
        elif self.real == 0:
            if self.imaginary >= 0:
                result = "0.00+%.2fi" % (self.imaginary)
            else:
                result = "0.00-%.2fi" % (abs(self.imaginary))
        elif self.imaginary > 0:
            result = "%.2f+%.2fi" % (self.real, self.imaginary)
        else:
            result = "%.2f-%.2fi" % (self.real, abs(self.imaginary))
        return result

if __name__ == '__main__':
    x,y=map(float,input().split())
    c1=Complex(x,y)
    x,y=map(float,input().split())
    c2=Complex(x,y)
    print(c1+c2)
    print(c1)

