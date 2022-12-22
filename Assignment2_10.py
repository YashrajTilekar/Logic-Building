def DigitSummation(No):
    Sum = 0
    while(No != 0):
        Sum = Sum + (No%10)

        No = int(No/10)

    return Sum

def main():
    print("Enter Number")
    Value1 = int(input())

    Ret = DigitSummation(Value1)
    print("Sum of Digits is :",Ret)

if(__name__ == "__main__"):
    main()
