//Accept String From User and count Number of vowels

#include<iostream>
using namespace std;

int CountWhiteSpace(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || 
        (*str == 'e') || 
        (*str == 'i') || 
        (*str == 'o') || 
        (*str == 'u') ||
        (*str == 'A') ||
        (*str == 'E') ||
        (*str == 'I') ||
        (*str == 'O') ||
        (*str == 'U') )
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);

    iRet = CountWhiteSpace(Arr);
    cout<<"String Contains "<<iRet<<" Vowel/s"<<endl;

    return 0;
}