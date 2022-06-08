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
    cin.getline(Arr,20);           //Accepts Whitespaces
    
    Display(Arr);


    return 0;
}