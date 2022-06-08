//Accept String From User and Reverse the String in Place

#include<iostream>
using namespace std;

void strreverseX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);

    strreverseX(Arr);

    cout<<"Reversed String is :"<<endl<<Arr<<endl;

    return 0;
}