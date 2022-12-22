import threading

def PrintEven(No):
    for Cnt in range(1 , No+1 , 1):
        if((Cnt % 2) == 0):
            print("Even Number : ",Cnt)

def PrintOdd(No):
    for Cnt in range(1 , No+1 , 1):
        if((Cnt % 2) != 0):
            print("Odd Number : ",Cnt)


def main():
    Value = 10
    tEven = threading.Thread(target= PrintEven , args= (Value ,))
    tOdd = threading.Thread(target= PrintOdd , args= (Value ,))

    tEven.start()
    tOdd.start()

    tEven.join()
    tOdd.join()

if(__name__ == "__main__"):
    main()