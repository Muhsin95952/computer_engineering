class polygon:
    def __init__(self):
        self.height = 0
        self.lenght = 0

    def setvalue(self, h, l):
        self.height = h
        self.lenght = l


class rect(polygon):
    def area(self):
        print("Area of rectangle is: ", self.height * self.lenght)


class trian(polygon):
    def area(self):
        print("Area of triangle is: ", (self.height * self.lenght)/2)


r1 = rect()
r1.setvalue(5, 10)
# print("Area of rectengle whose sides are 5 and 10 is: ")
r1.area()

t1 = trian()
t1.setvalue(5, 10)
# print("Area of a triangle whose sides are 5 and 10 is: ")
t1.area()
