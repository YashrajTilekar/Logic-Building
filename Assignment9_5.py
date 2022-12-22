import sys
import os

def File_StrFreq(File_Name , Str):
    if(not os.path.exists(File_Name)):
        print("Invalid File Name")
        return
    
    Freq = 0
    fd = open(File_Name , 'r')

    Freq = fd.read().count(Str)
    return Freq

def main():
    if(len(sys.argv) < 2):
        print("Invalid Number of Command Line Arguements")
        print("Type -h for Help")
        exit()
    
    if((sys.argv[1] == "-h") or (sys.argv[1] == "-H")):
        print("This program Accepts File Names & String as Command Line Arguements Returns frequency")
        exit()
    
    Ret = File_StrFreq(sys.argv[1] , sys.argv[2])

    print("Frequency of {} in {} is : {}".format(sys.argv[2] ,sys.argv[1] ,Ret))


if(__name__ == "__main__"):
    main()