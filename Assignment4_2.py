Multiplication = lambda No1 , No2 : No1 * No2

def main():
    print("Enter First Number")
    Value1 = int(input())

    print("Enter Second Number")
    Value2 = int(input())

    Ret = Multiplication(Value1 , Value2)
    print("Product is : " , Ret)

if(__name__ == "__main__"):
    main()