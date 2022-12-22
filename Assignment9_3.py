import sys
import os

def File_Copy(File_Name):
    if(not os.path.exists(File_Name)):
        print("Invalid File Name")
        return
    
    fd1 = open(File_Name , 'r')
    str = fd1.read()

    fd2 = open("Demo.txt" , 'w')
    fd2.write(str)


def main():
    if(len(sys.argv) < 2):
        print("Invalid Number of Command Line Arguements")
        print("Type -h for Help")
        exit()
    
    if((sys.argv[1] == "-h") or (sys.argv[1] == "-H")):
        print("This program Accepts File Name as Command Line Arguements and Copies the Contents into another File")
        exit()
    
    File_Copy(sys.argv[1])

if(__name__ == "__main__"):
    main()