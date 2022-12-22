def IsPower(No):
    Power = 1

    #TwoPowers = list()

    while(Power < No):
    #    TwoPowers.append(Power)
        Power = Power*2
    
    print(Power)

    Flag = False
    #for Cnt in range(0 , len(TwoPowers) , 1):
    if(Power == No):
        Flag = True
    
    return Flag



def main():
    print("Enter a Number")
    Value = int(input())

    Ret = IsPower(Value)
    print(Ret)

if(__name__ == "__main__"):
    main()