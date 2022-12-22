def DigitCount(No):
    Count = 0
    while(No != 0):
        Count = Count + 1
        No = int(No/10)

    return Count

def main():
    print("Enter Number")
    Value1 = int(input())

    Ret = DigitCount(Value1)
    print("Number of Digits are :",Ret)

if(__name__ == "__main__"):
    main()
