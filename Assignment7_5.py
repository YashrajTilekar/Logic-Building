import threading

def Display50():
    for Cnt in range(1 , 51 , 1):
        print(Cnt)

def Display50Rev():
    for Cnt in range(50 , 0 , -1):
        print(Cnt)


def main():
    thread1 = threading.Thread(target= Display50)
    thread2 = threading.Thread(target= Display50Rev)

    thread1.start()
    thread1.join()

    thread2.start()
    thread2.join()


if(__name__ == "__main__"):
    main()