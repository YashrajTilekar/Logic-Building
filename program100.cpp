//Count Occurance of Letter l

#include<iostream>
using namespace std;

int Countl(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'l')
        {
            iCnt++;
        }
        str++;

        return iCnt;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);           //Accepts Whitespaces
    
    iRet = Countl(Arr);
    cout<<"Occurance of Alphabet l is :"<<iRet<<" times"<<endl;

    return 0;
}