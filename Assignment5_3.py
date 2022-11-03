class Arithmetic:
    def __init__(self):
        self.Value1 = 0
        self.Value2 = 0

    def Accept(self):
        print("Enter First Number")
        self.Value1 = int(input())

        print("Enter Second Number")
        self.Value2 = int(input())

    def Addition(self):
        return self.Value1 + self.Value2

    def Subtraction(self):
        return self.Value1 - self.Value2
    
    def Multiplication(self):
        return self.Value1 * self.Value2
    
    def Division(self):
        return self.Value1 / self.Value2


def main():
    aobj = Arithmetic()

    aobj.Accept()
    Ret = aobj.Addition()
    print("Addition is : " , Ret)

    Ret = aobj.Subtraction()
    print("Subtraction is : " , Ret)

    Ret = aobj.Multiplication()
    print("Multiplication is : " , Ret)

    Ret = aobj.Division()
    print("Division is : " , Ret)


if(__name__ == "__main__"):
    main()