def Display(No):
    if(No >= 1):
        No = No - 1
        Display(No)
        print(No)


def main():
    print("Enter a Number")
    Value = int(input())

    Display(Value)

if(__name__ == "__main__"):
    main()