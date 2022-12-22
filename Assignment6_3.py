class Arithmetic:
    def __init__(self, N):
        self.Value = N

    def DisplayFactors(self):
        print("Factors of {} are : ".format(self.Value))

        for Cnt in range(1 , int(self.Value/2 + 1) ,1):
            if((self.Value % Cnt) == 0):
                print(Cnt ,end=" ")
        
        print()
    
    def SumFactors(self):
        Sum = 0

        for Cnt in range(1 , int(self.Value/2 + 1) ,1):
            if((self.Value % Cnt) == 0):
                Sum = Sum + Cnt
        
        return Sum
    
    def ChkPrime(self):
        if(self.Value == 2):
            return True

        Cnt = 0
        for Cnt in range(2 , self.Value,1):
            if((self.Value % Cnt) == 0):
                break
        
        print(Cnt)
        if(Cnt == self.Value-1):
            return True
        else:
            return False
    
    def ChkPerfect(self):
        FactSum = self.SumFactors()

        if(FactSum == self.Value):
            return True
        else:
            return False


def main():
    Value = int(input("Enter a Number"))
    aobj = Arithmetic(Value)

    aobj.DisplayFactors()

    Ret = aobj.SumFactors()
    print("Sum of Factors is : ",Ret)
    
    Ret = False
    Ret = aobj.ChkPrime()
    if(Ret == True):
        print("{} is a Prime Number".format(Value))
    else:
        print("{} is  NOT a Prime Number".format(Value))
    
    Ret = aobj.ChkPerfect()
    if(Ret == True):
        print("{} is a Perfect Number".format(Value))
    else:
        print("{} is  NOT a Perfect Number".format(Value))

if(__name__ == "__main__"):
    main() 