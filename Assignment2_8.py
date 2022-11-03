def Pattern(No):
    for i in range(1 , No+1 , 1):
        j = 1
        while(i >= j):
            print(j,end="\t")
            j = j+1
        
        print()


def main():
    print("Enter Number")
    Value1 = int(input())
    Pattern(Value1)

if(__name__ == "__main__"):
    main()
