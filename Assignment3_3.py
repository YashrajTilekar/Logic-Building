def Minimum(Arr):
    Min = Arr[0]

    for Cnt in range(0 , len(Arr) , 1):
        if(Arr[Cnt] < Min):
            Min = Arr[Cnt]
    
    return Min

def main():
    print("Enter Number of Elements")
    Size = int(input())

    Elements = list()

    print("Enter the Numbers")
    for Cnt in range(0 , Size , 1):
        Elements.append(int(input()))
    
    Ret = Minimum(Elements)
    print("Smallest Number is : " , Ret)
    

if(__name__ == "__main__"):
    main()