from Assignment4_3 import Product


def CheckPrime(No):

    CountFactors = 0

    for Cnt in range(2 , int(No/2)+1 , 1):
        if((No % Cnt) == 0):
            CountFactors = CountFactors+1

    if(CountFactors == 0):
        return True
    else:
        return False

Product = lambda No : No*2

def Maximum(Arr):
    Max = Arr[0]

    for Cnt in range(0 , len(Arr) , 1):
        if(Arr[Cnt] > Max):
            Max = Arr[Cnt]
    
    return Max

def FilterX(Function_Name , Numbers):
    Result = list()
    for Cnt in range(0 , len(Numbers) , 1):
        if(Function_Name(Numbers[Cnt])):
            Result.append(Numbers[Cnt])

    return Result

def MapX(Function_Name , Numbers):
    for Cnt in range(0 , len(Numbers) ,1):
        Numbers[Cnt] = Function_Name(Numbers[Cnt])

    return Numbers

def ReduceX(Function_Name , Numbers):
    Ans = Function_Name(Numbers)

    return Ans

def main():
    print("Enter Number of Elements")
    Size = int(input())

    print("Enter the Numbers")
    Values = list()

    for Cnt in range(0 , Size , 1):
        Num = int(input())
        Values.append(Num)

    Data_Filter = FilterX(CheckPrime , Values)
    print("Filtered Data is :-\n " , Data_Filter)

    Data_Map = MapX(Product , Data_Filter)
    print("Data After Mappping :-\n" , Data_Map)

    Data_Reduce = ReduceX(Maximum , Data_Map)
    print("Data After Reduce :-\n",Data_Reduce)

if(__name__ == "__main__"):
    main()