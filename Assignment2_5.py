def ChkPrime(No):
    CountFact = 0

    for Cnt in range(1 , int((No/2)+1) , 1):
        if((No % Cnt) == 0):
            CountFact = CountFact + 1
    
    if(CountFact == 1):
        return True
    else:
        return False

def main():
    print("Enter Number")
    Value1 = int(input())

    Ret = False
    Ret = ChkPrime(Value1)
    
    if(Ret == True):
        print("Number is a Prime Number")
    else:
        print("Number is not a Prime Number")

if(__name__ == "__main__"):
    main()
