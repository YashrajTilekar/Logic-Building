def Divisor(Diff):
    No = Diff
    Factors = list()
    Differences = list()

    while(True):
        for Cnt in range(1 , int(No/2 + 1) , 1):
            if(No%Cnt == 0):
                Factors.append(Cnt) 
        
        for Cnt in range(len(Factors)-1 , 0 ,-1):
            Differences.append(Factors[Cnt] - Factors[Cnt - 1])
        
        Count = 0
        for Cnt in range(0 , len(Differences)):
            if(Differences[Cnt] == Diff):
                Count = Count+1
        
        if(Count == len(Differences)):
            return Count

        No = No + 1




def main():
    print("Enter a Number")
    Value = int(input())

    Ret = Divisor(Value)
    print(Ret)

if(__name__ == "__main__"):
    main()