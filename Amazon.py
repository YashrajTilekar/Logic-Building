def getEncryptedNumber(Arr):
    Numbers = list()
    Temp = list()

    for Cnt in range(0 , len(Arr)-1 , 1):
        Numbers.append(Arr[Cnt] + Arr[Cnt+1])
    
    while(len(Numbers) != 2):
        for Cnt in range(0 , len(Numbers) , 1):
            if(Numbers[Cnt] >= 10):
                Numbers[Cnt] = Numbers[Cnt]%10
                
        for Cnt in range(0 , len(Numbers)-1 , 1):
            Temp.append(Numbers[Cnt] + Numbers[Cnt+1])
        
        Numbers = Temp
    
    
    if(Numbers[0] >= 10):
        Numbers[0] = Numbers[0]%10
    if(Numbers[1] >= 10):
        Numbers[1] = Numbers[1]%10
    #print(Numbers)

    Str = str(Numbers[0]) + str(Numbers[1])

    return Str

def main():
    Size = 0
    Size = int(input())

    Arr = list()

    for Cnt in range(0 , Size):
        Arr.append(int(input()))
    
    #print(Arr)
    Ret = getEncryptedNumber(Arr)
    print(Ret)



if(__name__ == "__main__"):
    main()