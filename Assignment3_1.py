def Add(Arr):
    Sum = 0

    for Cnt in range(0 , len(Arr) , 1):
        Sum = Sum + Arr[Cnt]
    
    return Sum

def main():
    print("Enter Number of Elements")
    Size = int(input())

    Elements = list()

    print("Enter the Numbers")
    for Cnt in range(0 , Size , 1):
        Elements.append(int(input()))
    
    Ret = Add(Elements)
    print("Addition of Numbers is : " , Ret)
    

if(__name__ == "__main__"):
    main()