class Complex:
    def __init__(self):
        self.re = 0
        self.img = 0

    def __init__(self, r, i):
        self.re = r
        self.img = i

    def set_values(self, rr, ii):
        self.re = rr
        self.img = ii

    def show(self):
        print("Complex number: ", self.re, "+", self.img, "i")


obj1 = Complex(1, 2)
obj1.show()

obj2 = Complex(0, 0)
obj2.show()
onj3 = Complex(5, 5)
onj3.show()
obj2.set_values(4, 5)
obj2.show()
