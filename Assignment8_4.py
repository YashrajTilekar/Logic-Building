Sum = 0

def SumDigits(No):
    global Sum 

    if(No != 0):
        Sum = Sum + (No % 10)
        No = int(No/10)
        SumDigits(No)
        return Sum
    

def main():
    print("Enter a Number")
    Value = int(input())

    Ret = SumDigits(Value)
    print("Sum of Digits of {} is {}".format(Value , Ret))

if(__name__ == "__main__"):
    main()