class Demo:
    Value = 77

    def __init__(self , No1 , No2):
        self.i = No1
        self.j = No2

    def Fun(self):
        print("Inside Demo Fun")
        print(self.i)
        print(self.j)

    def Gun(self):
        print("Inside Demo Gun")
        print(self.i)
        print(self.j)


def main():
    dObj1 = Demo(11 , 21)
    dObj2 = Demo(51 , 101)

    print(dObj1.i)
    print(dObj1.j)
    dObj1.Fun()
    dObj1.Gun()

    print(dObj2.i)
    print(dObj2.j)
    dObj2.Fun()
    dObj2.Gun()

    print(Demo.Value)

if(__name__ == "__main__"):
    main()