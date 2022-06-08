//Accept Two Strings From User and concatinate both strings 

#include<iostream>
#include<stdbool.h>
using namespace std;

bool strcmpX(char *str1 ,char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0'))
    {
        if(*str1 != *str2)
        {
            break;
        }
        str1++;
        str2++;
    }

    if((*str1 == '\0') && (*str2 == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    cout<<"Enter First String"<<endl;
    cin.getline(Arr,20);

    cout<<"Enter Second String"<<endl;
    cin.getline(Brr,20);

    bRet = strcmpX(Arr,Brr);

    if(bRet == true)
    {
        cout<<"Strings are equal"<<endl;
    }
    else
    {
        cout<<"Strings are NOT equal";
    }

    return 0;
}


/*
Numbering system
Decimal To binary conversion
binary to Decimal conversion
hexadecimal numbering system
binary to hexadecimal conversion
hexadecimal to binary conversion
bitwise operators  &, | ,^ ,!
bitwise shift operators << ,>>
*/