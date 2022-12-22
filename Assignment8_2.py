Cnt = 1

def Pattern(No):
    global Cnt

    if(Cnt <= No):
        print(Cnt , end= '\t')
        Cnt = Cnt + 1
        Pattern(No)

def main():
    Pattern(5)

if(__name__ == "__main__"):
    main()