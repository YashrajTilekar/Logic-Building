//Accept String From User and count Number of Small Characters 

#include<iostream>
using namespace std;

int CountSmall(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);
    cout<<"String Contains "<<iRet<<" Small Letter/s"<<endl;

    return 0;
}