//Accept String From User and Copy the String 

#include<iostream>
using namespace std;

void strcpyX(char *src ,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);

    strcpyX(Arr,Brr);

    cout<<"Copied String is :"<<endl<<Brr<<endl;

    return 0;
}