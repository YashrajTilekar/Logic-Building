from sys import *
import os
import shutil

def DirectoryCopy(Directory1 , Directory2):
    if(not os.path.exists(Directory1)):
        print("Directory dosen't exist")
        return
    
    os.mkdir(Directory2)

    for FolderName , SubFolders , Files in os.walk(Directory1):
        for Cnt in range(0 , len(Files) , 1):
            shutil.copyfile("/home/yashraj/Programs/{}/{}".format(Directory1 , Files[Cnt]) ,"/home/yashraj/Programs/{}/{}".format(Directory2 , Files[Cnt]))


def main():
    if(len(argv) < 2): 
        print("ERROR : Iinsufficient Arguements")
        print("Type -h for Help")
        print("Type -u for usage")
        exit()

    elif((argv[1] == "-h") or (argv[1] == "-H")):
        print("This application will accept Two Directory Names and copy all files from First directory to Second")
        exit()

    elif((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : Application_Name Directory1_Name Directory2_Name")
        exit()

    else:
        DirectoryCopy(argv[1]  ,argv[2])

if(__name__ == "__main__"):
    main()