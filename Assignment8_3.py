#Cnt = 1

def Pattern(No):
    #global Cnt
    if(No >= 1):
        print(No , end= '\t')
        #Cnt = Cnt + 1
        Pattern(No-1)

def main():
    Pattern(5)

if(__name__ == "__main__"):
    main()