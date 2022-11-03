def Maximum(Arr):
    Max = Arr[0]

    for Cnt in range(0 , len(Arr) , 1):
        if(Arr[Cnt] > Max):
            Max = Arr[Cnt]
    
    return Max

def main():
    print("Enter Number of Elements")
    Size = int(input())

    Elements = list()

    print("Enter the Numbers")
    for Cnt in range(0 , Size , 1):
        Elements.append(int(input()))
    
    Ret = Maximum(Elements)
    print("Largest Number is : " , Ret)
    

if(__name__ == "__main__"):
    main()