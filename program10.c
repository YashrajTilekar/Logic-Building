//Program to Display 5 Times HELLO on screen

#include<stdio.h>

//ITERATION
void Display()
{
    /*printf("HELLO.....\n");
    printf("HELLO.....\n");
    printf("HELLO.....\n");
    printf("HELLO.....\n");
    printf("HELLO.....\n"); */

    int iCnt = 0;

    for(iCnt=1; iCnt<=5; iCnt++)
    {
        printf("HELLO......\n");
    }
}

int main()
{
    Display();

    return 0;
}