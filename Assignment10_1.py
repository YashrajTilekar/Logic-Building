from sys import *
import os
import pathlib

def DirectorySearch(Directory_Name , Extension):
    if(not os.path.exists(Directory_Name)):
        print("Directory dosen't exist")
        return

    fd = open("Hello.txt" , 'w')
    fd.write("Files with extension {} are as follows : \n".format(Extension))

    for FolderName ,SubFolders ,Files in os.walk(Directory_Name):
        print("Foldername is : ",FolderName)                               

        for Cnt in range(0 , len(Files) ,1):
            File_Extension = pathlib.Path(Files[Cnt]).suffix
            
            if(File_Extension == Extension):
                fd.write(Files[Cnt] + "\n")


def main():
    if(len(argv) < 2): 
        print("ERROR : Iinsufficient Arguements")
        print("Type -h for Help")
        print("Type -u for usage")
        exit()

    elif((argv[1] == "-h") or (argv[1] == "-H")):
        print("This application will accept Directory Name and extension from user and display all the Files with that extension")
        exit()

    elif((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : Application_Name Directory_Name Extension")
        exit()

    else:
        DirectorySearch(argv[1]  ,argv[2])

if(__name__ == "__main__"):
    main()