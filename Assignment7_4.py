import threading

def CountCapital(Str):
    Count = 0

    for Cnt in range(0 , len(Str) , 1):
        if((Str[Cnt] >= 'A') and (Str[Cnt] <= 'Z')):
            Count = Count + 1
    
    print("Number of Capital Letters : ",Count)
    
def CountSmall(Str):
    Count = 0

    for Cnt in range(0 , len(Str) , 1):
        if((Str[Cnt] >= 'a') and (Str[Cnt] <= 'z')):
            Count = Count + 1
    
    print("Number of Small Letters : ",Count)

def CountDigits(Str):
    Count = 0

    for Cnt in range(0 , len(Str) , 1):
        if((Str[Cnt] >= '0') and (Str[Cnt] <= '9')):
            Count = Count + 1
    
    print("Number of Digits : ",Count)

def main():
    print("Enter a String")
    Value = input()

    small = threading.Thread(target= CountSmall , args= (Value ,))
    capital = threading.Thread(target= CountCapital , args= (Value ,))
    digit = threading.Thread(target= CountDigits , args= (Value ,))
    
    small.start()
    capital.start()
    digit.start()

    print("ID of Small Thread : " ,id(small))
    print("ID of Capital Thread : " ,id(capital))
    print("ID of Digit Thread : " , id(digit))


if(__name__ == "__main__"):
    main()