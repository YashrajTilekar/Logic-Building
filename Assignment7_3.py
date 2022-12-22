import threading

def SumEven(Arr):
    Sum = 0

    for Cnt in range(0 , len(Arr) , 1):
        if(Arr[Cnt]%2 == 0):
            Sum = Sum + Arr[Cnt]

    print("Sum of Even Numbers : ",Sum) 

def SumOdd(Arr):
    Sum = 0

    for Cnt in range(0 , len(Arr) , 1):
        if(Arr[Cnt]%2 != 0):
            Sum = Sum + Arr[Cnt]

    print("Sum of Odd Numbers : ",Sum) 

    
def main():
    print("Enter Number of Elements")
    Size = int(input())

    print("Enter the Elements")
    Data = list()
    for Cnt in range(0 , Size , 1):
        Data.append(int(input()))

    evenlist = threading.Thread(target= SumEven , args= (Data ,))
    oddlist = threading.Thread(target= SumOdd , args= (Data ,))

    evenlist.start()
    oddlist.start()
    
if(__name__ == "__main__"):
    main()