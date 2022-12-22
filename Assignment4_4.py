ChkEven = lambda No : ((No % 2) == 0)

Square = lambda No : No*No

Summation = lambda No1 , No2 : No1+No2

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
    Ans = 0
    for Cnt in range(0 , len(Numbers)):
        Ans = Function_Name(Ans , Numbers[Cnt])

    return Ans

def main():
    print("Enter Number of Elements")
    Size = int(input())

    print("Enter the Numbers")
    Values = list()

    for Cnt in range(0 , Size , 1):
        Num = int(input())
        Values.append(Num)

    Data_Filter = FilterX(ChkEven , Values)
    print("Filtered Data is :-\n " , Data_Filter)

    Data_Map = MapX(Square , Data_Filter)
    print("Data After Mappping :-\n" , Data_Map)

    Data_Reduce = ReduceX(Summation , Data_Map)
    print("Data After Reduce :-\n",Data_Reduce)

if(__name__ == "__main__"):
    main()