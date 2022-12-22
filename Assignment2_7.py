def Pattern(No):
    for i in range(1 , No+1 , 1):
        for j in range(1 , No+1 , 1):
            print(j , end="\t")
        
        print()


def main():
    print("Enter Number")
    Value1 = int(input())
    Pattern(Value1)

if(__name__ == "__main__"):
    main()
