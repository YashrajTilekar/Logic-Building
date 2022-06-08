//Program To Display 1 to 5 on screen

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    int iCnt=1;

    while(iCnt<=iNo)
    {
        printf("%d\n", iCnt);
        iCnt++;
    } 
}

//////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    printf("Please Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}