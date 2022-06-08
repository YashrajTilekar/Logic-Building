/**/
#include<stdio.h>

void Display(int iPtr[])
{
    printf("Elements of Array are:\n");

    register int iCnt = 0;
    for(iCnt = 0 ;iCnt < 5 ;iCnt++)
    {
        printf("%d\n", iPtr[iCnt]);
    }
}

int main()
{
    auto int Brr[5];

    printf("Enter Elements :\n");

    register int iCnt = 0;
    for(iCnt = 0 ;iCnt < 5 ;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    Display(Brr);

    return 0;
}