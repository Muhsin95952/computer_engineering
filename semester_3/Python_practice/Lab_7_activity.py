class Complex:
    def __init__(self, r=0, i=0):
        self.re = r
        self.img = i

    def sum(self, c):
        temp = Complex()
        temp.re = self.re + c.re
        temp.img = self.img + c.img
        return temp

    def __add__(self, c):
        temp = Complex()
        temp.re = self.re + c.re
        temp.img = self.img + c.img
        return temp

    def __invert__(self):
        temp = Complex()
        temp.re = -self.re
        temp.img = -self.img
        return temp

    def show(self):
        print(self.re, "+", self.img, "i")


c1 = Complex(3, 2.5)
c1.show()

c2 = Complex(3.5, 6)
c2.show()

c3 = Complex()
c3 = c1.sum(c2)
c3.show()

c3 = c1 + c2
c3.show()

c1 = ~c1
c1.show()
