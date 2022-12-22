def SumNumbers(str):
    Sum= 0 
    Temp = ""
    #print(type(Temp))

    for Cnt in range(0 ,len(str) ,1):
        if((str[Cnt] >= '0') and (str[Cnt] <= '9')):
            Temp = Temp + str[Cnt]
        else:
            if(len(Temp) == 0):
                continue

            Sum = Sum + int(Temp)
            Temp = ""

    if(len(Temp) == 1):
        Sum = Sum + int(Temp)

    return Sum

def main():
    print("Enter a String")
    value = input()

    Ret = SumNumbers(value)
    print("Sum of Numbers in {} is {}".format(value ,Ret))

if(__name__ == "__main__"):
    main()