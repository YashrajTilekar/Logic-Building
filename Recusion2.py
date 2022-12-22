import sys

def Display(No):
    if(No > 0):
        print("Hello......")
        No = No - 1 
        Display(No)


def main():
    print("Enter a Number")
    Value = int(input())

    print(sys.getrecursionlimit())
    Display(Value)

if(__name__ == "__main__"):
    main()