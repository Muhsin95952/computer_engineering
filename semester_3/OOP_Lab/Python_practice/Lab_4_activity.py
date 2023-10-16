import copy


class Student:
    def __init__(self):
        self.name = ""
        self.age = 0
        self.gpa = 0.0

    def __init__(self, n="", a=0, g=0.0):
        print("Constructor with perameter")
        self.name = n
        self.age = a
        self.gpa = g

    def __del__(self):
        print("Distractor.....")

    def show(self):
        print("Student name: ", self.name, "\nAge: ",
              self.age, "\nGPA: ", self.gpa)


S1 = Student("Muhsin shah", 21, 3.14)
S1.show()

S2 = Student("", 0, 0.0)
S2 = copy.copy(S1)
S2.show()

S3 = Student("", 0, 0.0)
S3 = copy.deepcopy(S1)
S3.show()

del S1
del S2
del S3
