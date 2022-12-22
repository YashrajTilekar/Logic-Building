import time
import threading

def DisplayEven(No):
    for Cnt in range(1 , No+1 , 1):
        if((Cnt % 2) == 0):
            print("Even Number : ",Cnt)

def DisplayOdd(No):
    for Cnt in range(1 , No+1 , 1):
        if((Cnt % 2) != 0):
            print("Odd Number : ",Cnt)

def main():
    print("Demonstration of Parallel Programming Uisng Multiple Processes ")
    
    Number = 2000
    P1 = threading.Thread(target = DisplayEven , args= (Number ,))
    P2 = threading.Thread(target = DisplayOdd , args= (Number ,))

    P1.start()
    P2.start()

    P1.join()
    P2.join()

    print("End of main")

if(__name__ == "__main__"):
    start_time = time.process_time()
    main()
    end_time = time.process_time()
    print("Execution time is : ",end_time - start_time)