def Factorial(No):
    if(No == 0):
        return 1

    if(No >= 1):
        return(No * Factorial(No - 1))

def main():
    print("Enter a Number")
    Value = int(input())

    Ret = Factorial(Value)
    print("Factorial of {} is :{}".format(Value , Ret))

if(__name__ == "__main__"):
    main()