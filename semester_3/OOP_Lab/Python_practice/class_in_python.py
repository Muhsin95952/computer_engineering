class Complex:
    def asd(self):
        self.re = 0
        self.img = 0
    def asdf(self,r,i):
        self.re = r
        self.img = i
    def set_values(self,rr,ii):
        self.re = rr
        self.img = ii
    def addCom(self,c1,c2):
        self.re=c1.re+c2.re 
        self.img=c1.img+c2.img 
    def subCom(self,c1,c2):
        self.re=c1.re-c2.re
        self.img=c1.img-c2.img
    def negate(self):
        self.re=-self.re
        self.img=-self.img 
        return self
    def conj(self):
        self.re=self.re
        self.img=-self.img
        return self
    def show(self):
        if self.img>=0:
            print("Complex number: ", self.re,"+",self.img,"i")
        else:
            print("Complex number: ",self.re,self.img,"i")

o1=Complex()
o1.set_values(2,5)
o1.show()
o2=Complex()
o2.set_values(4,8)
o2.show()
result=Complex()
result.addCom(o1,o2)
result.show()
sub=Complex()
sub.subCom(o1,o2)
sub.show()
o3=Complex()
o3=o1.negate()
print("Negation of Complex is given below......")
o3.show()
o3=o2.conj()
print("Conjugate of Complex number is also given below......")
o3.show()