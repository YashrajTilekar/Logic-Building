//Accept Two Strings From User and concatinate both strings 

#include<iostream>
using namespace std;

void strcatX(char *str1 ,char *str2)
{
    while(*str1 != '\0')
    {
        str1++;
    }

    while(*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    cout<<"Enter First String"<<endl;
    cin.getline(Arr,20);

    cout<<"Enter Second String"<<endl;
    cin.getline(Brr,20);

    strcatX(Arr,Brr);

    cout<<"Concatinated String is :"<<endl<<Arr<<endl;

    return 0;
}