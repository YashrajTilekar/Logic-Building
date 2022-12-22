import time

def DisplayEven(No):
    for Cnt in range(1 , No+1 , 1):
        if((Cnt % 2) == 0):
            print("Even Number : ",Cnt)

def DisplayOdd(No):
    for Cnt in range(1 , No+1 , 1):
        if((Cnt % 2) != 0):
            print("Odd Number : ",Cnt)

def main():
    print("Demonstration of Serial Programming")
    DisplayEven(2000)
    DisplayOdd(2000)

if(__name__ == "__main__"):
    start_time = time.time()
    main()
    end_time = time.time()
    print("Execution time is : ",end_time - start_time)