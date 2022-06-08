//Accept String From User and count Number of White Spaces 

#include<iostream>
using namespace std;

int CountWhiteSpace(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    cout<<"String Contains "<<iRet<<" White Space/s"<<endl;

    return 0;
}