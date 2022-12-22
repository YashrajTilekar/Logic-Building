ChkRange = lambda No : ((No >= 70) and (No <= 90))

Increment10 = lambda No : No+10

Product = lambda No1 , No2 : No1 * No2

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
    Mult = 1
    for Cnt in range(0 , len(Numbers)):
        Mult = Function_Name(Mult , Numbers[Cnt])

    return Mult

def main():
    print("Enter Number of Elements")
    Size = int(input())

    print("Enter the Numbers")
    Values = list()

    for Cnt in range(0 , Size , 1):
        Num = int(input())
        Values.append(Num)

    Data_Filter = FilterX(ChkRange , Values)
    print("Filtered Data is :-\n " , Data_Filter)

    Data_Map = MapX(Increment10 , Data_Filter)
    print("Data After Mappping :-\n" , Data_Map)

    Data_Reduce = ReduceX(Product , Data_Map)
    print("Data After Reduce :-\n",Data_Reduce)

if(__name__ == "__main__"):
    main()