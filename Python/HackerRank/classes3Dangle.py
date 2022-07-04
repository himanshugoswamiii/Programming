import math

class Points(object):
    def __init__(self, x, y, z):
        """Constructor"""
        self.x=x
        self.y=y
        self.z=z

    def __sub__(self, no):
        return Points((self.x-no.x),(self.y-no.y),(self.z-no.z))


    def dot(self, no):
        # Here I'm returning the value instead of the object
        return self.x*no.x+self.y*no.y+self.z*no.z
        

    def cross(self, no):
        # Note how i'm returning it as object of class instead of the value, because I want to use it later
        return Points((self.y*no.z-self.z*no.y),(-1*(self.x*no.z-self.z*no.x)),(self.x*no.y-self.y*no.x))
        
    def absolute(self):
        return pow((self.x ** 2 + self.y ** 2 + self.z ** 2), 0.5)

if __name__ == '__main__':
    points = list()
    # Getting points input from the user
    for i in range(4):
        a = list(map(float, input().split()))
        points.append(a)

    a, b, c, d = Points(*points[0]), Points(*points[1]), Points(*points[2]), Points(*points[3])
    x = (b - a).cross(c - b)
    # Now x is an object of the class not some value
    y = (c - b).cross(d - c)
    angle = math.acos(x.dot(y) / (x.absolute() * y.absolute()))

    print("%.2f" % math.degrees(angle))
