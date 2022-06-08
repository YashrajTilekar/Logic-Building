//Accept String From User and return the string into Upper case

#include<iostream>
using namespace std;

void struprX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);

    struprX(Arr);

    cout<<"String in Upper case :"<<endl<<Arr<<endl;

    return 0;
}