Power = lambda No : No*No

def main():
    print("Enter a Number")
    Value = int(input())
    
    Ret = Power(Value)
    print("Square is : " , Ret)

if(__name__ == "__main__"):
    main()