def Factorial(No):
    Mult = 1
    for Cnt in range(1 , No+1 , 1):
        Mult = Mult*Cnt
    
    return Mult


def main():
    print("Enter Number")
    Value1 = int(input())

    Ret = Factorial(Value1)
    print("Factorial is : ",Ret)



if(__name__ == "__main__"):
    main()
