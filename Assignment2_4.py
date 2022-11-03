def SummationFactors(No):
    Sum = 0

    for Cnt in range(1 , int((No/2)+1) , 1):
        if((No % Cnt) == 0):
            Sum = Sum + Cnt
    
    return Sum


def main():
    print("Enter Number")
    Value1 = int(input())

    Ret = SummationFactors(Value1)
    print("Summation of Factors is : ",Ret)

if(__name__ == "__main__"):
    main()
