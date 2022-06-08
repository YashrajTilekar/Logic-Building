#include<iostream>
using namespace std;

void Display(char *str)
{
    while(*str != '\0')
    {
        cout<<*str<<endl;
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String"<<endl;
    scanf("%s",Arr);           //dosen't Accept Whitespaces
    
    Display(Arr);


    return 0;
}