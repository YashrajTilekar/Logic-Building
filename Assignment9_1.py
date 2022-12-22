import sys 
import os

def Check_File(File_Name):
    if(os.path.exists(File_Name)):
        return True
    else:
        return False

def main():
    if(len(sys.argv) < 2):
        print("Invalid Number of Command Line Arguements")
        print("Type -h for Help")
    elif(sys.argv[1] == '-h' or sys.argv[1] == '-H') :
        print("This program accepts File name as CommandLine & check it's existence")   

    Ret = False
    Ret = Check_File(sys.argv[1]) 

    if(Ret == True):
        print("File Exists")
    else:
        print("File NOT present")

if(__name__ == "__main__"):
    main()