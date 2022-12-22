def Display(No):
    Cnt = 1

    while(Cnt <= No):
        print("Hello......")
        Cnt = Cnt + 1


def main():
    print("Enter a Number")
    Value = int(input())

    Display(Value)

if(__name__ == "__main__"):
    main()