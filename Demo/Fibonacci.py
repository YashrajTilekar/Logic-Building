def Fibonacci(Nth_Term):
    N1 = 0
    N2 = 1
    Sum = 0

    print(N1 ,end=" ")
    print(N2 ,end=" ")

    for Cnt in range(3 , Nth_Term+1 ,1):
        Sum = N1 + N2
        print(Sum ,end=" ")
        N1 = N2
        N2 = Sum


def main():
    print("Enter a Number")
    Value = int(input())

    Fibonacci(Value)

if(__name__ == "__main__"):
    main()