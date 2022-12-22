#include<stdio.h>

int main()
{
    for(int i = 3 ; i < 15 ; i = i + 3)
    {
        printf("%d " , i);
        ++i;
    }
    return 0;
}