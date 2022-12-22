def Frequency(Arr , No):
    Freq = 0
    for Cnt in range(0 , len(Arr) , 1):
        if(Arr[Cnt] == No):
            Freq = Freq+1
    
    return Freq

def main():
    print("Enter Number of Elements")
    Size = int(input())

    Elements = list()

    print("Enter the Numbers")
    for Cnt in range(0 , Size , 1):
        Elements.append(int(input()))
    
    print("Enter a Number to find Frequency")
    Value = int(input())
    
    Ret = Frequency(Elements,Value)
    print("Frequency of given Number is : " , Ret)
    

if(__name__ == "__main__"):
    main()