import sys 
import os

def Check_File(File_Name):
    if(os.path.exists(File_Name)):
        return True
    else:
        return False

def Display_File_Contents(File_Name):
    
    if(os.path.exists(File_Name)):
        fd = open(File_Name , 'r')
        File_Cotents = fd.read()
        
        return File_Cotents

    else:
        print("File does NOT exist")
        return

def main():
    if(len(sys.argv) < 2):
        print("Invalid Number of Command Line Arguements")
        print("Type -h for Help")
        exit()

    elif(sys.argv[1] == '-h' or sys.argv[1] == '-H') :
        print("This program accepts File name as CommandLine & display it's content")
        exit()   

    Ret = Display_File_Contents(sys.argv[1])
    print("Contents of the File are : - \n",Ret) 

if(__name__ == "__main__"):
    main()