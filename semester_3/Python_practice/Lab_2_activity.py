class Complex:
    def __init__(self):
        self.re = 0.0
        self.img = 0.0

    def __init__(self, r, i):
        self.re = r
        self.img = i

    def addCom(self, num1, num2):
        self.re = num1.re + num2.re
        self.img = num1.img + num2.img

    def negate(self):
        self.re = -self.re
        self.img = -self.img

    def show(self):
        if self.img > 0:
            print("Complex Number: ", self.re, " + ", self.img, "i")
        else:
            print("Complex Number: ", self.re, self.img, "i")


C1 = Complex(2.3, 1.5)
C2 = Complex(3.9, 3.3)
C1.show()
C2.show()

C = Complex(0, 0)
C.addCom(C1, C2)
C.show()
C1.negate()
C1.show()
