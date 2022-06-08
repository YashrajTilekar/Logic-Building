#include<iostream>
using namespace std;

void Display(char *str)
{
    while(*str != '\0')
    {
        cout<<*str;
        str++;
    }
}

int main()
{
    char Arr[] = "Hello";
    
    Display(Arr);

    return 0;
}