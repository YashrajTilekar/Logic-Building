def Add(No):
    if(No <= 0):
        return 0
    else:
        return(No + Add(No-1))


def main():
    print("Enter a Number")
    Value = int(input())

    Ret = Add(Value)
    print(Ret)

if(__name__ == "__main__"):
    main()