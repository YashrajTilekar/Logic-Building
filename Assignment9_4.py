import sys
import os

def File_Compare(File_1 , File_2):
    if((not os.path.exists(File_1))  or (not os.path.exists(File_2))):
        print("Invalid File Name")
        return
    
    fd1 = open(File_1 , 'r')
    str1 = fd1.read()

    fd2 = open(File_2 , 'r')
    str2 = fd2.read()

    if(str1 == str2):
        return True
    else:
        return False

def main():
    if(len(sys.argv) < 2):
        print("Invalid Number of Command Line Arguements")
        print("Type -h for Help")
        exit()
    
    if((sys.argv[1] == "-h") or (sys.argv[1] == "-H")):
        print("This program Accepts Two File Names as Command Line Arguements Compares their content")
        exit()
    
    Ret = False
    Ret = File_Compare(sys.argv[1] , sys.argv[2])

    if(Ret == True):
        print("Success!!!")
    else:
        print("Failure!!!")


if(__name__ == "__main__"):
    main()