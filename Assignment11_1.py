import sys
import os
import hashlib

def ChkSum(File_Name ,blocksize = 1024):
    fd = open(File_Name ,'rb')
    hasher = hashlib.md5()
    buffer = fd.read(blocksize)

    while(len(buffer) > 0):
        hasher.update(buffer)
        buffer = fd.read(blocksize)
    
    fd.close

    return hasher.hexdigest()

def DirectoryCheckSum(Directory_Name):
    if(not os.path.isabs(Directory_Name)):
        Directory_Name = os.path.abspath(Directory_Name)
    
    if(os.path.isdir(Directory_Name)):
        for FolderName , SubFolder , Files in os.walk(Directory_Name):
            print("Folder : ",FolderName)
            for Cnt in range(0 ,len(Files) ,1):
                CheckSum = ChkSum(Files[Cnt])
                print("CheckSum of {} is {}".format(Files[Cnt] ,CheckSum))

    else:
        print("Invalid Path")


def main():
    if(len(sys.argv) < 2):
        print("Invalid Number of Command Line Arguements")
        print("-h for Help")
        print("-u for usage")
        exit()
    
    if(sys.argv[1] == "-h" or sys.argv[1] == "-H"):
        print("This application accepts directory name and displays checksum of all files")
        exit()

    elif(sys.argv[1] == "-u" or sys.argv[1] == "-U"):
        print("Application_Name Directory_Name")
        exit()
    
    else:
        DirectoryCheckSum(sys.argv[1])
    



if(__name__ == "__main__"):
    main()