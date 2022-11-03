def PrimeSummation(Arr):
    SumFact = 0

    for Cnt in range(0 , len(Arr) , 1):
        if(CheckPrime(Arr[Cnt])):
            SumFact = SumFact + Arr[Cnt]

    return SumFact

def CheckPrime(No):

    CountFactors = 0

    for Cnt in range(2 , int(No/2)+1 , 1):
        if((No % Cnt) == 0):
            CountFactors = CountFactors+1

    if(CountFactors == 0):
        return True
    else:
        return False

def main():
    print("Enter Number of Elements")
    Size = int(input())

    Elements = list()

    print("Enter the Numbers")
    for Cnt in range(0 , Size , 1):
        Elements.append(int(input()))
    
    Ret = PrimeSummation(Elements)
    print("Sum of Prime Numbers is : " , Ret)


if(__name__ == "__main__"):
    main()