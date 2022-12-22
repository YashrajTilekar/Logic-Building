def Pattern(No):
    if(No > 0):
        print("*" , end="\t")
        Pattern(No - 1)

def main():
    Pattern(5)

if(__name__ == "__main__"):
    main()