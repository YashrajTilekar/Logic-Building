//Accept String From User and count Number of Capital Characters 

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 65) && (*str <= 90))      //Using Ascii Values
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

    iRet = CountCapital(Arr);
    cout<<"String Contains "<<iRet<<" Capital Letter/s"<<endl;

    return 0;
}