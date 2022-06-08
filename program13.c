//Program to Display 5 Times HELLO on screen

#include<stdio.h>

//ITERATION
void Display(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }


    int iCnt = 0;
    
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("HELLO......\n");
    }
}

int main()
{
    int iValue=0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    

    Display(iValue);

    return 0;
}