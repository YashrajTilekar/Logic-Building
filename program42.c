/*
    Array
*/

#include<stdio.h>

int main()
{
    auto int Arr[5];

    printf("Enter Elements :\n");

    register int iCnt1 = 0;
    for(iCnt1 = 0 ;iCnt1 < 5 ;iCnt1++)
    {
        scanf("%d",&Arr[iCnt1]);
    }

    printf("Elements of Array are:\n");

    register int iCnt2 = 0;
    for(iCnt2 = 0 ;iCnt2 < 5 ;iCnt2++)
    {
        printf("%d\n",Arr[iCnt2]);
    }

    return 0;
}