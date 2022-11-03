class Circle:
    Pi = 3.142

    def __init__(self):
        print('Inside Constructor')
        self.Radius = 0.0
        self.Area = 0.0
        self.Circumference = 0.0

    def Accept(self):
        print("Enter the Radius :- ")
        self.Radius = float(input())

    def CalculateArea(self):
        self.Area = self.Pi * self.Radius * self.Radius 

    def CalculateCircumference(self):
        self.Circumference = 2 * self.Pi * self.Radius

    def Display(self):
        print("Radius of Circle is : " ,self.Radius )
        print("Area of Circle is : " , self.Area)
        print("Circumference of Circle is : " , self.Circumference)    

def main():
    cobj1 = Circle()

    cobj1.Accept()
    cobj1.CalculateArea()
    cobj1.CalculateCircumference()
    cobj1.Display()


if(__name__ == "__main__"):
    main()