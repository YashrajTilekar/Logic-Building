/*
Accept Number From User and Display its Factors
reference :https://www.cuemath.com/numbers/factors/

input: 10
output: 1  2  5

input: 9
output: 1  3

input: 17
output: 1
*/
//////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for(iCnt = 1 ;iCnt <= (iNo/2) ;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
////////////////////////////////////////////////////////////////////////
int main()
{   
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}
//////////////////////////////////////////////////////////////////////////